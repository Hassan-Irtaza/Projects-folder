#include <iostream>
using namespace std;

int main()
{
    double floorNum, roomNum, occupiedRooms;
    double occupancy, occupancyRate;
    double countFloor = 0, countRoom = 0, countOccupancy = 0, countOccupiedRooms = 0;
    double maxOccupancyRate = 0, minOccupancyRate = 100;
    int maxOccupancyFloor = 0, minOccupancyFloor = 0;
    for (int i = 0; i < 13; i++)
    {
        cout << "Enter the Number of rooms in floor " << i << ": ";
        cin >> roomNum;
        cout << "Enter the Number of occupied rooms in the floor: ";
        cin >> occupiedRooms;
        while (occupiedRooms > roomNum)
        {
            cout << "Please enter the correct data" << endl;
            cout << "Enter the Number of rooms in the floor: ";
            cin >> roomNum;
            cout << "Enter the Number of occupied rooms in the floor: ";
            cin >> occupiedRooms;
        }
        floorNum = i;
        cout << "For FLoor no: " << floorNum << "\nThe total rooms are: " << roomNum << "\nThe occupied rooms are: " << occupiedRooms << endl;
        occupancy = (occupiedRooms / roomNum) * 100;
        cout << "The occupancy for floor " << floorNum << " is: " << occupancy << "%" << endl;
        countRoom += roomNum;
        countOccupiedRooms += occupiedRooms;
        if (occupancyRate > maxOccupancyRate)
        {
            maxOccupancyRate = occupancy;
            maxOccupancyFloor = i;
        }

        if (occupancyRate < minOccupancyRate)
        {
            minOccupancyRate = occupancy;
            minOccupancyFloor = i;
        }
    }
    cout << "The total number of floors are: " << floorNum + 1 << endl;
    cout << "The total number of rooms in the hotal are: " << countRoom << endl;
    cout << "The total number of occupied rooms in the hotal are: " << countOccupiedRooms << endl;
    cout << "Floor with the highest occupancy rate is floor " << maxOccupancyFloor << " with " << maxOccupancyRate << "%" << endl;
    cout << "Floor with the lowest occupancy rate is floor " << minOccupancyFloor << " with " << minOccupancyRate << "%" << endl;
    double totaloccupancy = countOccupiedRooms / countRoom * 100;
    cout << "The total occupancy is: " << totaloccupancy << "%" << endl;
    return 0;
}