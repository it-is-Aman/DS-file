#include <stdio.h>
#include <conio.h>

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int i,n = 10;
    printf("Fibonacci sequence of %d numbers: ", n);
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    getch();
    return 0;
}
