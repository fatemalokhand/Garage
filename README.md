# Garage

Author: Fatema Lokhandwala

Overview:
This is an application for a Garage. The garage logs Repairs made to Customer Cars by Mechanics.

List of files:
- README.txt: Contains this description
- Car.cc and Car.h: Contains Car information.
- Control.cc and Control.h: Controls the interaction of Garage with the View.
- Customer.cc and Customer.h: Contains information about the Customer.
- CustomerList.cc and CustomerList.h: It is a data structure for Customers.
- Entity.cc and Entity.h: A base class for people tracked by the Garage, both Mechanics and Customers.
- Garage.cc and Garage.h: A class that manages the Entities (Customers and Mechanics). Responsible for recording what Repairs are needed and who performed them.
- Mechanic.cc and Mechanic.h: Contains information about the Mechanic.
- MechanicList.cc and MechanicList.h: It is a data structure for Mechanics.
- Repair.cc and Repair.h: Responsible for tracking the Repairs and also the Mechanic who makes them.
- RepairList.cc and RepairList.h: A data structure made from a linked list to store Repairs, with some specialized functions specific to this application.
- View.cc and View.h: Contains a user menu, takes input.
- Makefile
- main.cc

Compilation and execution instructions:
- Navigate to the folder that contains all the files.
- Use the command `make`, `make all`, or `make a3` to create the object files and compile the files.
- If you would like to delete the object code, use the command `make clean`
- Type the command `./a3` while in the folder in which the executable has been created to launch the application in interactive mode.
