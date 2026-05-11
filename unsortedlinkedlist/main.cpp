#include "unsortedlinkedlist.h"

int main(){
    UnsortedList unsort;

    cout << "Before Insertion: " << endl;
    unsort.print(); // 0

    unsort.pushFront(5); // 5
    unsort.pushFront(10); // 10, 5
    unsort.pushFront(4); // 4, 10 , 5

    cout<< "After Insertion: " << endl;
    unsort.print(); // 4, 10, 5

    cout << "Before Deletion: " << endl;
    unsort.popMin(); // deletes 4 prints 4
    cout<< "After Deletion: " << endl; 
    unsort.print(); // 10, 5

    unsort.pushFront(19); //19, 10, 5
    unsort.pushFront(30); // 30, 19, 5, 10
    unsort.pushFront(1); // 1, 30, 19, 5 ,10

    unsort.popMin(); // deletes 1 prints 1
    unsort.popMin(); // deletes 5 prints 5

    cout << "Final List: " << endl;
    unsort.print(); // 30, 19, 10


    


}