#include <iostream>
using namespace std;

class Node 

{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr; /// Initialize left child to null
        rightchild = nullptr; /// Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initialize ROOT to null
    }

void insert()
    {
        int x;
        cout << "Masukan nilai: ";
        cin >> x;

        // step 1: Allocate memory for the node 
        Node *newNode = new Node();

        // step 2: Assign value to the data field of new node
        newNode->info = x;

        // step 3: Make the left and the right child of the new node point to null 
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4: Locate the node wich will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // step 5: if parent is NULL (tree is empty)
        if (parent == nullptr)
        {
            // 5a: Mark the node ad ROOT
            ROOT = newNode;
            
            // 5b: exit
            return;
        }

        


        
        

        

        
    






