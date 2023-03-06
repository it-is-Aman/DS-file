#include <stdio.h>
#include <conio.h>

void fibonacci(int limit) {
    int num1 = 0, num2 = 1, nextTerm;
    printf("Fibonacci Series up to %d:\n", limit);
    printf("%d, %d, ", num1, num2);
    nextTerm = num1 + num2;
    while(nextTerm <= limit) {
        printf("%d, ", nextTerm);
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }
}

int main() {
    int limit = 100;
    fibonacci(limit);
    getch();
    return 0;
}
