#include <iostream>

int main() {
    int a,b;
    char calculate;

    std :: cout << "enter first integer:";
    std :: cin >> a ;

    std :: cout << "enter second integer:";
    std :: cin >> b ;
    
    std :: cout << "what do you want to calculate";
    std :: cin >>  calculate;

int result;

if (calculate == '+'){
    result = a + b;
    }
        else if (calculate == '*'){
        result = a * b;
        }
            else if (calculate == '/'){
            result = a / b;
            }
                else if (calculate == '-'){
                result = a - b;
                }
                    else
                    std :: cout << "incorrect command" << std :: endl;

    return 0;
}


