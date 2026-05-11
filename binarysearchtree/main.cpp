#include "binarysearch.h"

int main(){
    BST d;

    d.insert("catch");
    d.insert("cat");
    d.insert("collar");
    d.insert("apple");
    d.insert("banana");
    d.insert("edge");
    d.insert("door");
    d.insert("app");
    d.insert("flower");

    cout << "All the words in our Dictionary: " << endl;
    d.print(); // app, apple, banana, cat, catch, collar, door, edge, flower
    cout << "\nSize: " << d.size() << endl;

    cout << "Completions of prefix 'ap': " << endl;
    d.completions("ap");

    cout << "Completions of prefix 'ca': " << endl;
    d.completions("ca");

    cout<< "Search for cat: " << endl;
    cout << d.search("cat") << endl;

    cout << "Search for blue: " << endl;
    cout << d.search("blue") << endl;
    
}