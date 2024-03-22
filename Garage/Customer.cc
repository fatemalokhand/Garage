#include "Customer.h"

const char Customer::code = 'C';
int Customer::nextId = 0;

void Customer::resetId(){
    nextId = 0;
}

// constructor
Customer::Customer(const string& newName, const string& newMake, const string& newModel, int newYear) : Entity(code, ++nextId, newName), car(Car(newMake, newModel, newYear)) {}

const Car Customer::getCar() const{
    return car;
}

void Customer::print() const{
    cout << endl;
    cout << "Customer's name: " << name << endl;
    cout << "Customer's id: " << id << endl;
    cout << "Customer's num of repairs: " << repairs.getNumRepairs() << endl;
    car.print();
}