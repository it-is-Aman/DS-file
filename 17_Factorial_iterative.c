#include <stdio.h>
#include <conio.h>

int factorial_ite(int n) {
    int i,result = 1;
    for(i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int factorial_rec(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial_rec(n-1);
    }
}

int main() {
    int n = 5;
    printf("Using Iterative, Factorial of %d is %d\n", n, factorial_ite(n));
    printf("Using Recursion, Factorial of %d is %d\n", n, factorial_rec(n));
    getch();
    return 0;
}
