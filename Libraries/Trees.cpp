#include "../Headers/cs121.h"

Tree::Tree()
{
    Left = NULL;
    Right = NULL;
}

void Tree::push(std::string side, std::string data)
{
    Node* newnode = new Node(data);
    Node* temp = root;

}