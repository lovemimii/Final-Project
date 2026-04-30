#include <iostream>
using namespace std;
class UnsortedList{
    public:
    UnsortedList();
    ~UnsortedList(); // deletes node memory 
    void print(); // prints all values
    void pushFront(int value);// inserts in the front of list
    int popMin(); // deletes and prints smallest value
    int size(); // prints size of list
    int minIndex(); // prints smallest number
    
    
    
    private:
    class Node{
        public:
        int data;
        Node* next;  
    };
    Node* head;
    Node* tail;
    
    
};