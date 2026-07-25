#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;  

void enqueue(int item) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1){
        front = 0;
        rear++;
        queue[rear] = item;
        printf("%d enqueued successfully\n", item);
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted item: %d\n", queue[front]);
    front++;
}
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d\n", queue[i]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();
}
