#ifndef ENTITY_H
#define ENTITY_H

#include "RepairList.h"

class Entity{

    protected:
        string name;
        string id;
        RepairList repairs;

    public:
        // constructor
        Entity(char code, int num, const string& newName);
        bool hasRepairs() const;
        bool addRepair(Repair* repair);
        Repair* getNextRepair();
        void print() const;
        void printRepairs() const;
        const string& getId() const;
};

#endif