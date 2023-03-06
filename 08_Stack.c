#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 100

int stack[SIZE], top = -1;

void push(int item) {
    if(top >= SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = item;
}

int pop() {
    if(top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    int item = stack[top];
    top--;
    return item;
}

void display() {
    if(top < 0) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for(int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    display();

    int item = pop();
    printf("Popped item: %d\n", item);
    display();
    item = pop();
    printf("Popped item: %d\n", item);

    display();
    getch();
    return 0;

}
