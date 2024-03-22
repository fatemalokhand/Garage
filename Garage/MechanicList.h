#ifndef MECHANICLIST_H
#define MECHANICLIST_H

#include <iostream>
#include <string>
#include "Mechanic.h"

#define MAX_MECHANICS 100

using namespace std;

class MechanicList{

	private:
		int numMechanics;
		Mechanic** mechanics;
		
	public:
		//constructor
		MechanicList();
		
		//destructor
		~MechanicList();
		
		// other methods
		bool addMechanic(Mechanic* m);
		Mechanic* getMechanic(const string& id) const;
		int size() const;
		void print() const;
        int getNumOfMechanics() const;
};

#endif