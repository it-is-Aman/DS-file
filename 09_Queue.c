#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 100

int queue[SIZE], front = -1, rear = -1;

void enqueue(int item) {
    if(rear >= SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = item;
    } 
    else {
        rear++;
        queue[rear] = item;
    }
}

int dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    int item = queue[front];
    front++;
    if(front > rear) {
        front = rear = -1;
    }
    return item;
}

void display() {
    if(front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    display();

    int item = dequeue();
    printf("Dequeued item: %d\n", item);
    display();

    item = dequeue();
    printf("Dequeued item: %d\n", item);
    display();
    getch();
    return 0;
}
