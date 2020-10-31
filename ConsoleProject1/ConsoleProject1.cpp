#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int main()
{
    /*
    int slices;
    cout << "Yo how many slices of pizza you gon eat?" << std::endl;
    cin >> slices;
    cout << "You have " << slices << " slices of pizza!" << std::endl;
    cout << std::endl;
    */
    int base, exponent;
    cout << "What's your base?:" << std::endl;
    cin >> base;
    cout << "What's your exponent?:" << std::endl;
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power << std::endl;

    system("pause>0");
}