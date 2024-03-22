#include "CustomerList.h"

// constructor
CustomerList::CustomerList(){
    numCustomers = 0;
	customers = new Customer*[MAX_CUSTOMERS];
}

// destructor
CustomerList::~CustomerList(){
    for(int i=0; i<numCustomers; i++){
		if(customers[i]){
			delete customers[i];
		}
	}

	delete [] customers;
}

bool CustomerList::addCustomer(Customer* c){
    if(numCustomers >= MAX_CUSTOMERS) return false;
	customers[numCustomers] = c;
	++numCustomers;
	return true;
}

Customer* CustomerList::getCustomer(const string& id) const{
    for(int i = 0; i < numCustomers; ++i){
		if(id == customers[i]->getId()){
			return customers[i];
		}
	}
	return nullptr;
}

int CustomerList::size() const{
    return numCustomers;
}

void CustomerList::print() const{
    for(int i = 0; i < numCustomers; ++i){
		customers[i]->print();
		std::cout << std::endl;
	}
}

bool CustomerList::isFull() const{
    if(MAX_CUSTOMERS <= numCustomers){
        return true;
    }
    else{
        return false;
    }
}

int CustomerList::getNumOfCustomers() const{
    return numCustomers;
}