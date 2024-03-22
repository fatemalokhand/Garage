#include "Car.h"

// constructor
Car::Car(const string& newMake, const string& newModel, int newYear) : make(newMake), model(newModel), year(newYear) {}

void Car::print() const{
    cout << "Car's make: " << make << endl;
    cout << "Car's model: " << model << endl;
    cout << "Car's year: " << year << endl;
}