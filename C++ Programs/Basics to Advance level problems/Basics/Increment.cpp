#include <iostream>
using namespace std;
int main()
{
    // demonstrate postfix increment operator
    int c = 5;
    cout << "c before postincrement: " << c << endl;

    cout << " postincrementing c: " << c++ << endl;

    cout << " c after postincrement: " << c << endl;

    cout << endl; // skip a line

    // demonstrate prefix increment operator
    c = 5;
    cout << " c before preincrement: " << c << endl;
    cout << " preincrementing c: " << ++c << endl;
    cout << " c after preincrement: " << c << endl;
}