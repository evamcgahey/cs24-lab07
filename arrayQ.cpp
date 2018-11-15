// arrayQ.cpp - implements queue as array
// Eva McGahey, 11/15/18

#include "arrayQ.h"

Queue::Queue() {
  int front = 0;
  int rear = 0;
  int data[CAPACITY];
  int size = 0;
}  // IMPLEMENT CONSTRUCTOR

void Queue::enqueue(int n) {
    if (isFull())
        throw FullQueue();
    else {
      data[rear] = n;
      rear = (rear+1)%CAPACITY;
      size++;
    }
}

int Queue::dequeue() {
    if (isEmpty())
        throw EmptyQueue();
    else {
      front = (front+1)%CAPACITY;
      size--;
    }
    return data[front];
}

void Queue::clear() {
  while(!isEmpty()) {
    front = (front+1)%CAPACITY;
    size--;
  }
}

bool Queue::isEmpty() const {
  if (size==0) {
    return true;
  } else {
    return false;
  }
}

bool Queue::isFull() const {
  if (front == rear) {
    return true;
  }else{
    return false;
  }
}

int Queue::getSize() const {
    return size;
}
