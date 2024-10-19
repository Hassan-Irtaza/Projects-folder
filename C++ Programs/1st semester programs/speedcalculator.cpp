#include <iostream>

int main() {
    int d,t;

    std :: cout << "Speed Calculator:\n";
    std :: cout << "what is the distance:";
    std :: cin >> d;
    std :: cout << "what is the time:";
    std :: cin >> t;

    int v = d / t;
    std :: cout << "The speed is "<< v << " meter per second" << std :: endl;

}