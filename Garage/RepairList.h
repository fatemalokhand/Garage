#ifndef REPAIRLIST_H
#define REPAIRLIST_H

#include "Repair.h"

// this is a linked list
class RepairList{

    class Node{

        public:
            Repair* data;
            Node* next;
    };

    private:
        Node* head;
        Node* tail;
        int numRepairs;

    public:
        // constructor
        RepairList();

        // destructor
        ~RepairList();

        bool add(Repair* repair);
        Repair* getNext();
        bool isEmpty() const;
        int size() const;
        void print() const;
        int getNumRepairs() const;
};

#endif