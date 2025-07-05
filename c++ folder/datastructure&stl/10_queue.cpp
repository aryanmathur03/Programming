#include <iostream>
using namespace std;
#include <queue>    

int main(){
    // FIFO stands for First in, First Out
    queue <int> myQueue;
    // Pushing elements into the queue
    myQueue.push(10);  
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    // Printing the front element of the queue
    cout << "Front element of the queue is: " << myQueue.front() << endl;
    // Popping the front element of the queue
    myQueue.pop();
    cout << "Front element after popping is: " << myQueue.front() << endl;
    // Checking if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
    // Printing the size of the queue
    cout << "Size of the queue is: " << myQueue.size() << endl;

    // Iterating through the queue (not directly possible, so we use a temporary queue)
    queue<int> tempQueue = myQueue; // Create a copy of the queue
    cout << "Elements in the queue: ";
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
    // Note: Queue does not support iterators, so we cannot use range-based for loop directly.
    // Queue is a FIFO (First In First Out) data structure, so the first element
    // pushed is the first one to be popped.
    // Example of using queue as a FIFO structure
    queue<int> fifoQueue;
    fifoQueue.push(1);
    fifoQueue.push(2);
    fifoQueue.push(3); 
    cout << "FIFO Queue elements: ";
    while (!fifoQueue.empty()) {
        cout << fifoQueue.front() << " ";
        fifoQueue.pop();
    }   

    return 0;
}