#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car{

    private:
        string make;
        string model;
        int year;

    public:
        // constructor
        Car(const string& newMake, const string& newModel, int newYear);
        void print() const;
};

#endif