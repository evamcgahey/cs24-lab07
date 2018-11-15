// listQ.cpp - implements queue as linked list
// NAME(S), DATE

#include "listQ.h"

Queue::Queue() { }  // IMPLEMENT CONSTRUCTOR

Queue::~Queue() {
    // IMPLEMENT DESTRUCTOR (delete all the nodes)
}

void Queue::enqueue(int n) {
    // IMPLEMENT (remember to consider special cases)
}

int Queue::dequeue() {
    if (isEmpty())
        throw EmptyQueue();

    // COMPLETE THIS IMPLEMENTATION (remember to delete node)
    return 0; // AND REPLACE THIS RETURN STATEMENT
}

void Queue::clear() {
    // IMPLEMENT (delete all nodes and reset variables)
}

bool Queue::isEmpty() const {
    // IMPLEMENT
    return true; // AND REPLACE THIS RETURN STATEMENT
}

int Queue::getSize() const {
    // IMPLEMENT
    return 0; // AND REPLACE THIS RETURN STATEMENT
}
