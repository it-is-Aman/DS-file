#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], size, pos, i;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size) {
        printf("Invalid position.\n");
    }
    else {
        for(i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i+1];
        }
        size--;
        printf("Array after deletion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    getch();
    return 0;
}