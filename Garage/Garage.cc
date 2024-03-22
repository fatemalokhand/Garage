#include "Garage.h"

const string Garage::REPAIRS[NUM_REPAIRS] = {"Oil Change", "Brake Check", "Tire Rotation", "Battery Check", "Air Filter Replacement", "Coolant Flush", "Transmission Flush", "A/C Recharge", "Engine Diagnostic", "Brake Pad Replacement"};

// Constructor
Garage::Garage(){
    customerList = new CustomerList();
    mechanicList = new MechanicList();
}

// destructor
Garage::~Garage(){
    delete customerList;
    delete mechanicList;
}

// function to add a new Mechanic with the given parameters
bool Garage::addMechanic(const string& name){
    Mechanic* newMechanic = new Mechanic(name);

    bool value = mechanicList->addMechanic(newMechanic);
    if(value == true){
        cout << "Mechanic was added successfully." << endl;
        return true;
    }
    else{
        // mechanic list does not have space
        cout << "Cannot add the mechanic." << endl;
        delete newMechanic;
        return false;
    }
}

// function to add a new Customer with the given parameters
bool Garage::addCustomer(const string& name, const string& make, const string& model, int year){
    Customer* newCustomer = new Customer(name, make, model, year);

    bool value = customerList->addCustomer(newCustomer);
    if(value == true){
        cout << "Customer was added successfully." << endl;
        return true;
    }
    else{
        // customer list does not have space
        cout << "Cannot add the customer." << endl;
        delete newCustomer;
        return false;
    }
}

// function to make a new Repair and add it to the Customer if the customer exists
bool Garage::addRepair(const string& customerId, int repairCode, double cost){
    Customer* c = customerList->getCustomer(customerId);
    if(c == nullptr){
        // customer does not exist
        cout << "Cannot add the repair because the customer does not exist." << endl;
        return false;
    }
    else{
        // customer exists
        Repair* repair = new Repair(repairCode, cost);
        bool value = c->addRepair(repair);
        if(value == true){
            cout << "Repair was added successfully." << endl;
            return true;
        }
        else{
            cout << "Repair did not get added." << endl;
            return false;
        }
    }
}

// function to make the next repair if the given Mechanic and Customer exist
bool Garage::makeNextRepair(const string& mechanicId, const string& customerId) const{
    Mechanic* m = mechanicList->getMechanic(mechanicId);
    Customer* c = customerList->getCustomer(customerId);
    if(m != nullptr && c != nullptr){
        Repair* r = c->getNextRepair();
        if(r == nullptr){
            cout << "There is no next repair." << endl;
            return false;
        }
        else{
            r->Repair::completeRepair(mechanicId);
            bool value = m->addRepair(r);
            if(value == true){
                cout << "Repair was added successfully." << endl;
                return true;
            }
            else{
                cout << "Repair was not added." << endl;
                return false;
            }
        }
    }
    else{
        cout << "Cannot make the next repair." << endl;
        return false;
    }
}

// function to find and return the given Customer
Customer* Garage::getCustomer(const string& id) const{
    Customer* c = customerList->getCustomer(id);
    if(c == nullptr){
        cout << "Customer does not exist." << endl;
    }
    return c;
}

// function to find and return the given Mechanic
Mechanic* Garage::getMechanic(const string& id) const{
    Mechanic* m = mechanicList->getMechanic(id);
    if(m == nullptr){
        cout << "Mechanic does not exist."  << endl;
    }
    return m;
}

// function to print all the Mechanics (without Repairs)
void Garage::printMechanics() const{
    mechanicList->print();
}

// function to print all the Customers (without Repairs)
void Garage::printCustomers() const{
    customerList->print();
}

// function to print the given Mechanic with Repairs
void Garage::printMechanicRepairs(const string& id) const{
    Mechanic* m = mechanicList->getMechanic(id);
    if(m == nullptr){
        cout << "Mechanic does not exist." << endl;
    }
    else{
        // printing the mechanic with repairs
        m->print();
        m->printRepairs();
    }
}

// function to print the given Customer with Repairs
void Garage::printCustomerRepairs(const string& id) const{
    Customer* c = customerList->getCustomer(id);
    if(c == nullptr){
        cout << "Customer does not exist." << endl;
    }
    else{
        // printing the given Customer with Repairs
        c->print();
        c->printRepairs();
    }
}

// function to reset the ids of customers and mechanics
void Garage::resetIds(){
    Customer::resetId();
    Mechanic::resetId();
}