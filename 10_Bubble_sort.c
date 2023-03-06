#include<stdio.h>
#include <conio.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for(i = 0; i < size-1; i++) {
        for(j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void display(int *arr,int size){
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,3,6,8,9,4,2,5,1,0};                                                            
    int size=10;

    printf("Before sorting\n");
    display(arr,size);
    bubbleSort(arr,size);
    printf("After sorting\n");
    display(arr,size);
    getch();
    return 0;
}