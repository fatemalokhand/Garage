#include "Repair.h"
#include "Garage.h"

const string Repair::NOTCOMPLETE = "not complete";

// constructor
Repair::Repair(int newRepairCode, double newCost) : repairCode(newRepairCode), cost(newCost), mechanicId(NOTCOMPLETE) {}

bool Repair::isComplete() const{
    if(mechanicId == NOTCOMPLETE){
        return false;
    }
    else{
        return true;
    }
}

void Repair::completeRepair(const string& newMechanicId){
    mechanicId = newMechanicId;
}

void Repair::print() const{
    cout << "Repair's description: " << Garage::REPAIRS[repairCode] << endl;
    cout << "Repair's cost: $" << cost << endl;
    cout << "Mechanic's ID: " << mechanicId << endl;
}