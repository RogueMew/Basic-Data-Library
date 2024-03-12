#include "../Headers/cs121.h"

Stack::Stack(){Top = NULL;}

bool Stack::isEmpty(){return(Top == NULL);}

void Stack::push(std::string input)
{
    Node* newBlock = new Node(input);
    if(isEmpty()){Top = newBlock;newBlock->next = NULL;return;}
    newBlock->next = Top;
    Top = newBlock;
}

void Stack::print()
{

    if (isEmpty())
    {
        std::cout << "List is Empty" << std::endl;
        return;
    }
    Node* p = Top;
    while (p != NULL)
    {
        std::cout << p->data << std::endl;
        p = p->next;
    }
}

int Stack::size()
{
    if (isEmpty())
    {
        return 0;
    }
    Node* p = Top;
    int counter = 0;
    while (p != NULL)
    {
        counter++;
        p = p->next;
    }
    return counter;
}

std::string Stack::pop()
{
    if (isEmpty())
    {
        std::cerr << "Error: List Empty" << std::endl;
    }
    
    Node* p = Top;
    Top = p->next;
    std::string tempData = p->data;
    delete p;
    return tempData;
}
