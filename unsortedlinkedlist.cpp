#include "unsortedlinkedlist.h"

UnsortedList::UnsortedList(){
    head = nullptr;
    tail = nullptr;
}

UnsortedList::~UnsortedList(){
    for (Node* i = head; i != nullptr){ // loops through list from head to tail 
        Node* temp = i->next; // creates a node that holds the address of i-> next
        delete i; // deletes current i data
        i = temp; // makes temp hold a new i -> next
    }
}

void UnsortedList::print(){
    for (Node* i = head; i != nullptr; i = i-> next){ // loops through list head to tail 
        // i->data->print();
        cout << i-> data << endl;
        
    }
}

void UnsortedList::pushFront(){
    Node* n = new Node();
    n -> next = head;
    head = n;
    if (head == nullptr){
        tail = n;
    }
}

int UnsortedList::popBack(){
    int min = head -> data;
    Node* j;
    for (int i = 0; i < size(); i++){
        if (i -> data < m)
    }
}

int UnsortedList::size(){
    int count = 0;
    for (Node* i = head; i != nullptr; i = i -> next){
        count++;
    }
    return count;
}