#include "RepairList.h"

// constructor
RepairList::RepairList() : head(NULL), tail(NULL), numRepairs(0) {}

// destructor
RepairList::~RepairList(){
    Node* currNode = head;
    Node* nextNode = NULL;

    while(currNode!=NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

bool RepairList::add(Repair* repair){

    // creating the node
    Node* newNode = new Node();
    newNode->data = repair;
    newNode->next = NULL;

    if(head == NULL && tail == NULL){
        // linked list is empty
        head = newNode;
        tail = newNode;
        numRepairs++;
        return true;
    }
    else{
        // linked list is not empty
        tail->next = newNode;
        tail = newNode;
        numRepairs++;
        return true;
    }

    return false;
}

Repair* RepairList::getNext(){
    if(head == NULL && tail == NULL){
        // linked list is empty
        return nullptr;
    }
    else{
        // linked list is not empty
        Repair* data = head->data;
        Node* temp = head;
        head = head->next;

        if(head == NULL){
            tail = NULL;
        }

        delete temp;
        numRepairs--;
        return data;
    }
}

bool RepairList::isEmpty() const{
    if(numRepairs == 0){
        // repair list is empty
        return true;
    }
    else{
        // repair list is not empty
        return false;
    }
}

int RepairList::size() const{
    return numRepairs;
}

void RepairList::print() const{
    Node* currNode = head;

    if(currNode == NULL){
        cout << "The list is empty" << endl;
    }

    while(currNode != NULL){
        currNode->data->print();
        currNode = currNode->next;
    }
}

int RepairList::getNumRepairs() const{
    return numRepairs;
}