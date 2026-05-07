#include "binarysearch.h"

int main(){
    BST d;

    d.insert("ab");
    d.insert("abc");
    d.insert("abcd");
    d.insert("acdf");
    d.insert("cat");
    d.insert("catch");
    d.insert("bcf");

    cout << "All the words in our Dictionary: " << endl;
    d.print();
    d.size();

    cout << "Completions: " << endl;
    d.completions("ab");

    cout<< "Search for Cat: " << endl;
    d.search();




}