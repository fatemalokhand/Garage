#ifndef MECHANIC_H
#define MECHANIC_H

#include "Entity.h"

class Mechanic : public Entity{

    private:
        static const char code;
        static int nextId;

    public:
        static void resetId();
        // constructor
        Mechanic(const string& newName);
        void print() const;
};

#endif