#include "binarysearch.h"

BST::BST(){ // O(1)
    root = nullptr;
}

BST::~BST(){ // O(n)
    deleteNodes(root);
}

void BST::deleteNodes(Node* p){ // O(n)
    if (p == nullptr)
        return;
    deleteNodes(p->left);
    deleteNodes(p->right);
    delete p;
}

int BST::size(){ // O(n)
    return computeSize(root);
}

int BST::computeSize(Node* p){ // O(n)
    if (p == nullptr)
        return 0;

    return 1 + computeSize(p -> left) + computeSize(p -> right);
}

void BST::insert(string word){ // O(logn)
    insertN(root, word);
}

void BST::insertN(Node* &p, string &value){ // in an unbalanced tree, O(n); in a perfect BST, O(logn)
    if (p == nullptr){
        Node* n = new Node();
        n -> data = value;
        n -> left = nullptr;
        n -> right = nullptr;
        p = n;
    }
    else if (p -> data > value)
        insertN(p -> left, value);
    else
        insertN(p -> right, value);
}

bool BST::search(string word){
    return searchN(root, word);
}

bool BST::searchN(Node* p, string &value){ //in an unbalanced tree, O(n); in a perfect BST, O(logn)
    if (p == nullptr)
        return false;
    else if (p -> data == value)
        return true;
    else if (p->data > value)
        return searchN(p->left, value);
    else
        return searchN(p->right, value);
}

void BST::print(){  
    printN(root);
}

void BST::printN(Node* &p){ //using in-order traversal
    if (p == nullptr)
        return;
    printN(p->left);
    cout << p->data << ", " ;
    printN(p->right);
}

void BST::completions(string pref){
    completionN(root, pref);
}

void BST::completionN(Node* &p, string pref){
    if (p == nullptr) //base case
        return;
    
    int comp = p->data.compare(0, pref.length(), pref); // this compares the first 2 letters of the strings and compares them 
    
    if(comp == 0){
        cout << p-> data<< endl; // if there are no comparisions then its equal and we print

        completionN(p->left, pref); // we still check left and right for matches of the same first 2 letters
        completionN(p->right, pref);
    }
    else if(comp < 0){ // if the nodes pref is smaller than the comparision pref then we check right for the match
        completionN(p->right, pref);
    }
    else{ // if nodes pref is bigger then comparison pref then we check left
        completionN(p->left, pref);
    }
}