#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], i, size, search, found = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);
    for(i = 0; i < size; i++) {
        if(arr[i] == search) {
            found = 1;
            printf("%d found at position %d.\n", search, i+1);
        }
    }
    if(!found) {
        printf("%d not found in the array.\n", search);
    }
    getch();
    return 0;
}