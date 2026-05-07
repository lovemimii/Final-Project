#include "binarysearch.h"

BST::BST(){
    root = nullptr;
}

BST::~BST(){
    deleteNodes(root);
}

void BST::deleteNodes(Node* p){
    if (p == nullptr)
        return;
    deleteNodes(p->left);
    deleteNodes(p->right);
    delete p;
}

int BST::size(){
    return computeSize(root);
}

int BST::computeSize(Node* p){
    if (p == nullptr)
        return 0;

    return 1 + computeSize(p -> left) + computeSize(p -> right);
}

void BST::insert(string word){
    insertN(root, value);
}

void BST::insertN(Node* p, string value){
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
    return searchN(root, value)
}

bool BST::searchN(Node* p, string value){
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

void BST::print(Node* p){ //using in-order traversal
    if (p == nullptr)
        return;
    print(p->left);
    cout << p-> data << " ";
    print(p->right)

}

void BST::completions(string perf){
    completionN(root, pref);
}

void BST::completionN(Node* p, string pref){
    if (p == nullptr) //base case
        return;
    
    int comp = n->data.compare(0, pref.length(), pref); // this compares the first 2 letters of the strings and compares them 
    
    if(comp == 0){
        cout << n-> data<< endl; // if there are no comparisions then its equal and we print

        completionN(n->left, pref); // we still check left and right for matches of the same first 2 letters
        completionN(n->right, pref);
    }
    else if(comp < 0){ // if the nodes pref is smaller than the comparision pref then we check right for the match
        completionN(n->right, pref);
    }
    else{ // if nodes pref is bigger then comparison pref then we check left
        completionN(n->left, pref);
    }
}