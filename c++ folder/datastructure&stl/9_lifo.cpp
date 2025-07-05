#include <iostream>
using namespace std;
#include <stack>

int main(){
    stack <int> mystack;
    //pushing element in the stack
    mystack.push(10);
    mystack.push(20);  
    mystack.push(30);
    mystack.push(40);

    //printing the top element of the stack
    cout << "Top element of the stack is: " << mystack.top() << endl;
    //popping the top element of the stack
    mystack.pop();
    cout << "Top element after popping is: " << mystack.top() << endl;
    //checking if the stack is empty
    if (mystack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
    //printing the size of the stack
    cout << "Size of the stack is: " << mystack.size() << endl;
    //iterating through the stack (not directly possible, so we use a temporary stack)
    stack<int> tempStack = mystack; // Create a copy of the stack
    cout << "Elements in the stack: ";
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
    // Note: Stack does not support iterators, so we cannot use range-based for loop directly.
    // Stack is a LIFO (Last In First Out) data structure, so the last element pushed is the first one to be popped.
    // Example of using stack as a LIFO structure
    stack<int> lifoStack;
    lifoStack.push(1);
    lifoStack.push(2);
    lifoStack.push(3);     
    cout << "LIFO Stack elements: ";
    while (!lifoStack.empty()) {
        cout << lifoStack.top() << " ";
        lifoStack.pop();
    }


    return 0;
}