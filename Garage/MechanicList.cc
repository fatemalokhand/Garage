#include "MechanicList.h"

// constructor
MechanicList::MechanicList(){
    numMechanics = 0;
	mechanics = new Mechanic*[MAX_MECHANICS];
}

// destructor
MechanicList::~MechanicList(){
    for(int i=0; i<numMechanics; i++){
		if(mechanics[i]){
			delete mechanics[i];
		}
	}

	delete [] mechanics;
}

bool MechanicList::addMechanic(Mechanic* m){
    if(numMechanics >= MAX_MECHANICS) return false;
	mechanics[numMechanics] = m;
	++numMechanics;
	return true;
}

Mechanic* MechanicList::getMechanic(const string& id) const{
    for(int i = 0; i < numMechanics; ++i){
		if(id == mechanics[i]->getId()){
			return mechanics[i];
		}
	}
	return nullptr;
}

int MechanicList::size() const{
    return numMechanics;
}

void MechanicList::print() const{
    for(int i = 0; i < numMechanics; ++i){
		mechanics[i]->print();
		std::cout << std::endl;
	}
}

int MechanicList::getNumOfMechanics() const{
    return numMechanics;
}