#ifndef REPAIR_H
#define REPAIR_H

#include <iostream>
#include <string>

using namespace std;

class Repair{

    private:
        int repairCode;
        double cost;
        string mechanicId;
        static const string NOTCOMPLETE;

    public:
        // constructor
        Repair(int newRepairCode, double newCost);
        bool isComplete() const;
        void completeRepair(const string& newMechanicId);
        void print() const;
};

#endif