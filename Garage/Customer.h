#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Entity.h"
#include "Car.h"

class Customer : public Entity{

    private:
        static const char code;
        static int nextId;
        Car car;

    public:
        static void resetId();
        // constructor
        Customer(const string& newName, const string& newMake, const string& newModel, int newYear);
        const Car getCar() const;
        void print() const;
};

#endif