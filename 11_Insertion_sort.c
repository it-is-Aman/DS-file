#include<stdio.h>
#include <conio.h>

void insertionSort(int *arr,int size){
    int key,i,j;

    for(i=1;i<size;i++){                                                                      
        key=arr[i];                                                                                
        j=i-1;                                                                                     

        while(j>=0 && arr[j]>key){                                                                 
            arr[j+1]=arr[j];                                                                       
            j--;                                                                                   
        }
        arr[j+1]=key;                                                                              
    }
}

void display(int *arr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={1,4,2,7,8,9,6,5};
    int size=8;

    printf("Before sorting\n");
    display(arr,size);
    insertionSort(arr,size);
    printf("After sorting\n");
    display(arr,size);
    getch();
    return 0;
}