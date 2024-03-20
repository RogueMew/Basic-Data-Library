#ifndef CS121_H
#define CS121_H

#include <iostream>
class Node
{
    public:
    Node();
    Node(std::string);
    bool isEmpty();
    std::string data;
    Node* next;
};

class List
{
    public:
        List();
        void append(std::string);
        void prepend(std::string);
        int length();
        void print();
        void print(int);
        bool isEmpty();
        bool inList(std::string);
        void removeFirst();
        std::string pop();
        void removeLast();
    private:
        Node* Head;
        std::string data;
};

class Stack
{
    private:
        Node* Top;
        std::string data;
    public:
        Stack();
        void push(std::string);
        int size();
        void print();
        bool isEmpty();
        std::string pop();
};

class Tree
{
    private:
        int data;
        Node* root
        Node* left;
        Node* right;
    public:
        Tree();
        void push(std::string, std::string);
        int size();
        viid print();
};
#endif