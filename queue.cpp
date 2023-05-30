#include "Arduino.h"
#include "queue.h"

queue::queue(uint8_t maxSize) {
  MAX_SIZE = maxSize;
  data = new uint8_t[MAX_SIZE];
  front = 0;
  rear = 0;
  itemCount = 0;
}

bool queue::isEmpty() {
  return (itemCount == 0);
}

bool queue::isFull() {
  return (itemCount == MAX_SIZE);
}

void queue::enqueue(uint8_t element) {
  if (!isFull()) {
    data[rear] = element;
    rear++;
    itemCount++;
  }
}

uint8_t queue::dequeue() {
  if (!isEmpty()) {
    uint8_t value = data[front];
    front++;
    itemCount--;
    return value;
  }
  else {
    return 0;
  }
}
