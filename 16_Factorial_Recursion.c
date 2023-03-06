#include <stdio.h>
#include <conio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    getch();
    return 0;
}
