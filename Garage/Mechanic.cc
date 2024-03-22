#include "Mechanic.h"

const char Mechanic::code = 'M';
int Mechanic::nextId = 0;

void Mechanic::resetId(){
    nextId = 0;
}

// constructor
Mechanic::Mechanic(const string& newName) : Entity(code, ++nextId, newName) {}

void Mechanic::print() const{
    cout << endl;
    cout << "Mechanic's name: " << name << endl;
    cout << "Mechanic's id: " << id << endl;
    cout << "Mechanic's num of repairs: " << repairs.getNumRepairs() << endl;
}