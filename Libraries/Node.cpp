#include "../Headers/cs121.h"

Node::Node(std::string input)
{
    data = input;
    next = NULL;
}

Node::Node(){next = NULL;}