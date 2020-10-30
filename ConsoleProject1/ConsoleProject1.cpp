#include <iostream>
using namespace std;


class Car {
private:
    
    string Color;
    double Price;
    
protected:
    string Name;
    bool IsBroken;
public:
    Car(string name, string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        IsBroken = false;
    }
    void getInfo() {
        cout << "Name: " << Name << endl;
        cout << "Color: " << Color << endl;
        cout << "Price : $" << Price << endl;
    }
    void crashCar() {
        cout << Name << " crashed" << endl;
        IsBroken = true;
    }
    void repairCar() {
        cout << Name << " repaired" << endl;
        IsBroken = false;
    }
    void move() {
        if (IsBroken) {
            cout << Name << " is broken" << endl;
        }
        else {
            cout << Name << " is driveable" << endl;
        }
    }

};

class FlyingCar :public Car {
public:
    FlyingCar(string name, string color, double price):Car(name, color, price) {

    }
    void move() {
        if (IsBroken) {
            cout << Name << " is broken" << endl;
        }
        else {
            cout << Name << " is flying" << endl;
        }
    }
};

class UnderwaterCar :public Car {
public:
    UnderwaterCar(string name, string color, double price) :Car(name, color, price) {

    }
    void move() {
        if (IsBroken) {
            cout << Name << " is broken" << endl;
        }
        else {
            cout << Name << " is diving" << endl;
        }
    }
};

int main()
{
    Car ford("Ford", "beige", 80000);
    FlyingCar knightRider("Sky Fury", "Black", 50000);
    UnderwaterCar underwaterCar("Sea Storm", "blue", 6000000);

    ford.move();
    knightRider.move();
    underwaterCar.move();
    cout << endl;

    Car* car1 = &underwaterCar;
    Car* car2 = &knightRider;
    car1->crashCar();
    car2->crashCar();
    cout << endl;

    car1->move();
    car2->move();
    cout << endl;
    
    car1->repairCar();
    car2->repairCar();
    cout << endl;

    car1->move();
    car2->move();
    cout << endl;

    

    system("pause>0");
}