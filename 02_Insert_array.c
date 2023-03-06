#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], i, size, pos, value;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if(pos <= 0 || pos > size + 1) {
        printf("Invalid position.\n");
    }
    else {
        for(i = size - 1; i >= pos - 1; i--) {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = value;
        size++;

        printf("Array after insertion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    getch();
    return 0;
}