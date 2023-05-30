#ifndef queue_h
#define queue_h

#include "Arduino.h"

class queue {
  public:
    queue(uint8_t mazSize);
    bool isEmpty();
    bool isFull();
    void enqueue(uint8_t element);
    uint8_t dequeue();

  private:
    uint8_t MAX_SIZE;
    uint8_t* data;
    uint8_t front;
    uint8_t rear;
    uint8_t itemCount;
};

#endif
