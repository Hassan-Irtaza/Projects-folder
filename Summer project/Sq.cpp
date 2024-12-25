#include <sqlite3.h>
#include <iostream>
using namespace std;

class Database {
private:
    sqlite3* db;
    int connectionStatus;

public:
    Database(const std::string& dbName) {
        connectionStatus = sqlite3_open(dbName.c_str(), &db);
        if (connectionStatus) {
            std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        } else {
            std::cout << "Opened database successfully!" << std::endl;
        }
    }

    ~Database() {
        sqlite3_close(db);
        std::cout << "Database closed." << std::endl;
    }

    sqlite3* getConnection() {
        return db;
    }
};

class User {
private:
    int id;
    std::string name;
    int age;
    sqlite3* db;

public:
    User(sqlite3* database) : db(database) {}

    void create(const std::string& userName, int userAge) {
        std::string sql = "INSERT INTO Users (Name, Age) VALUES ('" + userName + "', " + std::to_string(userAge) + ");";
        char* errorMessage;
        int result = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errorMessage);

        if (result != SQLITE_OK) {
            std::cerr << "Error inserting user: " << errorMessage << std::endl;
            sqlite3_free(errorMessage);
        } else {
            std::cout << "User added successfully." << std::endl;
        }
    }

    void readAll() {
        std::string sql = "SELECT * FROM Users;";
        sqlite3_stmt* stmt;

        if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) == SQLITE_OK) {
            while (sqlite3_step(stmt) == SQLITE_ROW) {
                int id = sqlite3_column_int(stmt, 0);
                const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
                int age = sqlite3_column_int(stmt, 2);

                std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << std::endl;
            }
        } else {
            std::cerr << "Error reading users." << std::endl;
        }

        sqlite3_finalize(stmt);
    }

    // Add methods for update and delete
};

int main() {
    // Connect to the database
    Database db("example.db");

    // Create Users table (only for the first run)
    const char* createTableSQL = "CREATE TABLE IF NOT EXISTS Users ("
                                 "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
                                 "Name TEXT NOT NULL, "
                                 "Age INTEGER NOT NULL);";
    char* errorMessage;
    sqlite3_exec(db.getConnection(), createTableSQL, nullptr, nullptr, &errorMessage);

    if (errorMessage) {
        std::cerr << "Table creation failed: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    // Interact with the Users table
    User userModel(db.getConnection());

    // Create users
    userModel.create("Alice", 25);
    userModel.create("Bob", 30);

    // Read all users
    std::cout << "Users in the database:" << std::endl;
    userModel.readAll();

    return 0;
}
