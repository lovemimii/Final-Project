#include <iostream> 
#include <string>
using namespace std;

class BST{
    public: // methods
    BST(); // constructor
    ~BST();

    int size(); // number of nodes 

    void insert(string word);
    bool search(string word);
    void print();
    void completions(string pref);
    

    private: // data members
    class Node{
        public:
        string data;
        Node* left;
        Node* right;
    };

    Node* root;
    void deleteNodes(Node* p);
    int computeSize(Node* p);
    bool searchN(Node* p, string &value);
    void printN(Node* &p);
    void completionN(Node* &p, string pref);
    void insertN(Node* &p , string &value);
};

