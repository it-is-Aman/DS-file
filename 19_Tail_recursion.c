#include <stdio.h>
#include <conio.h>

int tail_factorial(int n, int result) {
    if(n == 0) {
        return result;
    } else {
        return tail_factorial(n - 1, n * result);
    }
}

int main() {
    int n = 4;
    printf("Factorial of %d is %d\n", n, tail_factorial(n, 1));
    getch();
    return 0;
}
