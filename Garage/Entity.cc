#include "Entity.h"

// constructor
Entity::Entity(char code, int num, const string& newName){
    name = newName;
    id = code + to_string(num);
    repairs = RepairList();
}

bool Entity::hasRepairs() const{
    if(repairs.isEmpty()){
        return false;
    }
    else{
        // repairs is not empty
        return true;
    }
}

bool Entity::addRepair(Repair* repair){
    bool value = repairs.add(repair);

    if(value == true){
        cout << "Repair was added successfully." << endl;
        return true;
    }
    else{
        cout << "Repair was not added." << endl;
        return false;
    }
}

Repair* Entity::getNextRepair(){
    Repair* r = repairs.getNext();
    return r;
}

void Entity::print() const{
    cout << "Entity's name: " << name << endl;
    cout << "Entity's id: " << id << endl;
    cout << "Entity's num of repairs: " << repairs.getNumRepairs() << endl;
}

void Entity::printRepairs() const{
    this->print();
    repairs.print();
}

const string& Entity::getId() const{
    return id;
}