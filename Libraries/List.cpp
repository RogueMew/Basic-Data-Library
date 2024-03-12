#include "../Headers/cs121.h"

List::List(){Head = NULL;}

bool List::isEmpty(){if (Head == NULL){return true;}else{return false;}}

void List::append(std::string input)
{
    Node* newNode = new Node(input);
    Node* temp = Head;
    if (isEmpty()){Head = newNode;return;}
    while (temp->next != NULL){temp = temp->next;}
    temp->next = newNode;
}

void List::prepend(std::string input)
{
    Node* newNode = new Node(input);
    newNode->next = Head;
    Head = newNode;
}

void List::print()
{
    Node* Temp = Head;
    if (isEmpty()){std::cout << "List is Empty" << std:: endl;}
    while (Temp != NULL)
    {
    if (Temp->next == NULL)
    {
        std::cout << Temp->data << std::endl;
    }else
    {
        std::cout << Temp->data << ", ";
    }
    Temp = Temp->next;
    }
}

void List::print(int position)
{
    if (position > length()-1)
    {
        std::cerr << "Error: Not in the Index of the List" << std::endl;
        return;
    }
    int counter = 0;
    Node* p = Head;
    while(p != NULL && counter != position)
    {
        p = p->next;
        counter++;
    }
    std::cout << p->data << std::endl;
}

bool List::inList(std::string input)
{
    Node* temp = Head;
    if (isEmpty())
    {
        return false;
    }
    while(temp != NULL)
    {
        if (temp->data == input)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int List::length()
{
    int counter = 0;
    Node* temp = Head;
    if (isEmpty())
    {
        return counter;
    }
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

std::string List::pop()
{
    if (isEmpty())
    {
        std::cerr << "Error: List Empty" << std::endl;
    }
    
    Node* p = Head;
    Head = p->next;
    std::string tempData = p->data;
    delete p;
    return tempData;
}

void List::removeFirst()
{
    if(isEmpty())
    {
        std::cerr << "Error: List Empty" << std::endl;
    }
    Node* p = Head;
    Head = p->next;
    delete p;
}

void List::removeLast()
{
    if (isEmpty())
    {
        std::cerr << "Error: List Empty" << std::endl;
        return;
    }
    Node* p = Head;
    if (Head->next == NULL)
    {
        delete Head;
        Head = NULL;
        return;
    }
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    delete p->next;
    p->next = NULL;

}

