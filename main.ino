#include "queue.h"

queue queue_1(5);

void setup() {
  Serial.begin(115200);
  Serial.println(queue_1.isEmpty());
  Serial.println(queue_1.isFull());
  queue_1.enqueue(1);
  queue_1.enqueue(2);
  queue_1.enqueue(3);
  queue_1.enqueue(4);
  queue_1.enqueue(5);
  Serial.println(queue_1.isEmpty());
  Serial.println(queue_1.isFull());
  for(int i = 0; i<5; i++) {
    Serial.print(queue_1.dequeue());
    Serial.print(", ");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
