#include "../Headers/cs121.h"

Tree::Tree()
{
    left = NULL;
    right = NULL;
}

void Tree::push(std::string side, std::string data)
{
    Node* newnode = new Node(data);
    Node* temp = root;
    if(temp == NULL)
    {
        root->side = newnode;
        return;
    }
    
}