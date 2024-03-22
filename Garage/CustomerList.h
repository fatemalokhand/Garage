#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <iostream>
#include <string>
#include "Customer.h"

#define MAX_CUSTOMERS 100

using namespace std;

class CustomerList{

	private:
		int numCustomers;
		Customer** customers;
		
	public:
		// constructor
		CustomerList();
		
		// destructor
		~CustomerList();
		
		// other methods
		bool addCustomer(Customer* c);
		Customer* getCustomer(const string& id) const;
		int size() const;
		void print() const;
        bool isFull() const;
        int getNumOfCustomers() const;
};

#endif