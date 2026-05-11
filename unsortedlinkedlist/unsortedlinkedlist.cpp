#include "unsortedlinkedlist.h"

UnsortedList::UnsortedList(){ // O(2)
    head = nullptr; // creates empty list of nullptr
    tail = nullptr;
}

UnsortedList::~UnsortedList(){ // O(n)
    for (Node* i = head; i != nullptr;){ // loops through list from head to tail 
        Node* temp = i->next; // creates a node that holds the address of i-> next
        delete i; // deletes current i data
        i = temp; // makes temp hold a new i -> next
    }
}

void UnsortedList::print(){ //O(n)
    for (Node* i = head; i != nullptr; i = i-> next){ // loops through list head to tail 
        // i->data->print();
        cout << i-> data << endl; // prints current i's data
        
    }
}

void UnsortedList::pushFront(int value){ // O(6)
    Node* n = new Node(); // create new node space for value
    n->data = value; // makes new node data equal to value being inserted
    n -> next = head; // makes new nodes next equal to current head to establish new head
    head = n; // makes new node head of list
    if (head == nullptr){ // if the node is first value in list its both head and tail
        tail = n;
    }
}

int UnsortedList::popMin(){ // O(n)
    if (head == nullptr) 
        return 0; // returns 0 in case the list is empty
    int index = minIndex(); // finds the "index" of the node that holds the minimum value
    if (index == 0){ // in case the minimum value is being held at the first node
        int temp = head -> data; // defines a temporary variable that holds the data that will be returned
        Node* d = head; // creates a variable 'd' to hold the address of head
        head = d -> next; // sets head to the next node in the list
        delete d; // deletes the node
        return temp; // returns the value from the deleted node
    }

    Node* current = head; // creates a variable 'current' that will hold the address of the node whose next holds the minimum value
    for (int i = 0; i < index - 1; i++){
        current = current -> next; // finds the address of the node whose next holds the minimum value
    }
    Node* d = current -> next; // creates a pointer variable 'd' to hold the address of the node that will be deleted
    int temp = d -> data; // creates a variable 'temp' that holds the data that will be returned
    current -> next = d -> next; // sets the next of the current node to the node following the node that will be deleted
    if (d == tail){ // in the case that the last node holds the minimum value
        tail = current; // tail is set to the previous node
    }
    delete d; // deletes the node
    return temp; // returns the value from the deleted node
}

int UnsortedList::minIndex(){ // O(n)
    if (head == nullptr) // returns -1 in the case that the list is empty
        return -1;
    Node* current = head; // creates a pointer variable 'current' that holds the address of head
    int min = current -> data; // creates a variable 'min' that stores the minimum value
    int minIndex = 0, index = 0; // creates two variables 'minIndex' and 'index'
    while (current != nullptr){ // goes through the entirety of the list
        if (current -> data < min){ // if the data of the current node is smaller that min
            min = current -> data; // sets min to the currents data
            minIndex = index; // sets minIndex to index
        }
        current = current -> next; // changes current each time the loop runs
        index++; // increases index each time the loop runs
    }
    return minIndex; // returns the index of the minimum value
}

int UnsortedList::size(){ O(n)
    int count = 0; // initiates count to 0
    for (Node* i = head; i != nullptr; i = i -> next){
        count++; // increases count by 1 each time the loop runs
    }
    return count; // returns count
}