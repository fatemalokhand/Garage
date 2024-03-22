#ifndef GARAGE_H
#define GARAGE_H

#include <iostream>
#include <string>
#include "CustomerList.h"
#include "MechanicList.h"

using namespace std;

class Garage{

	private:
		// a data structure that contains customers
		CustomerList* customerList;	
		// a data structure that contains mechanics
		MechanicList* mechanicList;
		
	public:
		static const int NUM_REPAIRS = 10;
		static const string REPAIRS[NUM_REPAIRS]; 
		// Constructor
		Garage();
		// destructor
		~Garage();
		bool addMechanic(const string& name);
		bool addCustomer(const string& name, const string& make, const string& model, int year);
		bool addRepair(const string& customerId, int repairCode, double cost);
		bool makeNextRepair(const string& mechanicId, const string& customerId) const;
		Customer* getCustomer(const string& id) const;
		Mechanic* getMechanic(const string& id) const;
		void printMechanics() const;
		void printCustomers() const;
		void printMechanicRepairs(const string& id) const;
		void printCustomerRepairs(const string& id) const;
		void resetIds();
};

#endif