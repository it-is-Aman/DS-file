#include <stdio.h>
#include <conio.h>

void display(int *arr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int size){
    int i,j,indexSmall, temp;

    //loop 1 for passes(steps)
    for(i=0 ; i<size-1 ; i++){                                                                
        indexSmall = i;                                                                           

        //loop 2 for comparison
        for(j=i+1 ; j<size ; j++){                                                             
            if(arr[j] < arr[indexSmall]){                                                          
                indexSmall = j;
            }
        }
        //swap
        temp=arr[i];                                                                               
        arr[i]=arr[indexSmall];
        arr[indexSmall]=temp;
    }                                                                                              
}

int main(){

    int arr[]={1,4,2,7,8,9,6,5};
    int size=8;

    printf("Before sorting\n");
    display(arr , size);
    selectionSort(arr , size);
    printf("After sorting\n");
    display(arr , size);
    getch();
    return 0;
}