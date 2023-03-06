#include <stdio.h>
#include <conio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int i, n = sizeof(arr) / sizeof(arr[0]);

    printf("Array Elements: ");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    getch();
    return 0;
}
