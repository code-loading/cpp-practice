#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

//double power(double, int);
double power(double base, int exponent) {

    double result = 1;

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    return result;
}

void print_pow(double base, int exponent) {

    double myPower = power(base, exponent);
    cout << base <<" raised to the power "<< exponent <<" is "<< myPower << ".\n";
}

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
    cout<<std::endl;

    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(4, 2);

   

    system("pause>0");
}

