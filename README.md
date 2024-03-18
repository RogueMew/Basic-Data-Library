# Basic Data Library

This library was made to create a Custom version of Lists, Stacks and Nodes. I will update it every now and then but it will not be one of my main focuses. 

# Classes

## Node

### Variables

```cpp

std::string data; //Stores the data put into it
Node* next; //Next Node Address stored Here

```

### Methods

```cpp

Node::Node(std::string input) // Creates a Node with the input data

Node::Node() //Creates a Node with no next Address stored  

```

## List

### Variables

```cpp

Node* Head; // Stores a Head node for the Begining of the List
std::string data; // Stores the data as a string type

```

### Methods

```cpp

List::List(); // Creates a New blank List

bool List::isEmpty(); // Checks if a List is empty and returns a Boolean Value (True or False)

void List::append(std::string input); // Adds an Item to the end of the List

void List::prepend(std::string input); // Adds an item to the front of the List

void List::print(); // Prints the List in its whole

void List::print(int position); // Prints a Specific item from a List using a specific position (Uses common indexing for lists and arrays)

bool List::inList(std::string input); // Checks if an Item is in a List and returns a Boolean value (True or False) NOTE: This function is case sensitive

int List::length(); // Returns an integer of the size of a List

std::string List::pop(); // Removes the first item in a list and returns that value

void List::removeFirst(); // Removes the first item in a List

void List::removeLast(); // Removes the last Item of a List

```

### Example Outputs

```

List.print() = 1,2,3,4,...

```


## Stack

### Variables

```cpp

Node* Top; // Node Pointer to the top of Stack

std::string data; // Stores string data for the Stack

```

### Methods

```cpp

Stack::Stack(); //Creates a New Empty Stack

bool Stack::isEmpty(); // Checks if the stack is empty and returns a Boolean value (True or False)

void Stack::push(std::string input); // Pushes a new item to the top of  stack

void Stack::print(); // Prints the stack in a top down format

int Stack::size(); // Returns an Integer value of the size of the Stack

std::string Stack::pop(); // Deletes the top of the Stack and returns the value that was stored there

```

### Example Output

```

Stack.print() = 1
2
3
4
...

```