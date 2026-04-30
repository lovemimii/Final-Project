#include <iostream> 
using namespace std;

class BST{
    public: // methods
    BST(); // constructor
    ~BST();

    int size(); // number of nodes
    int height(); // height of the tree. 

    void insert(string word);
    bool search(string word);
    void print();
    void completions(string pref);


    

    private: // data members
    class Node{
        public:
        int data;
        Node* left;
        Node* right;
    };

    Node* root;
    
};

