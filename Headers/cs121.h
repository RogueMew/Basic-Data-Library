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

class TreeNode
{
    TreeNode();
    TreeNode(std::string);
    int data;
    TreeNode* left, right;
}

class Tree
{
    private:
        TreeNode* root;
        TreeNode* preorder();
    public:
        Tree();
        Tree(int);
        void appendL(int);
        void appendR(int);
        void print();
};
#endif