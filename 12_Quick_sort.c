#include<stdio.h>
#include <conio.h>

void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high){
    int i = low + 1;                                                                               
    int j = high;                                                                                  
    int temp;

    do{
        while(arr[i]<=arr[low]){        //arr[low] is our pivot                                                             
            i++;
        }
        while(arr[j]>arr[low]){                                                                   
            j--;
        }
        if(i<j){                                                                                  
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);                                                                                  
                                         
        temp=arr[low];             //swap                                                               
        arr[low]=arr[j];
        arr[j]=temp;

    return j;                                                                                     

}

void quickSort(int arr[], int low, int high){
    int partitionIndex;

    if(low < high){                                                                               
        partitionIndex = partition(arr,low,high);   
        quickSort(arr,low,partitionIndex-1);                                                      
        quickSort(arr,partitionIndex+1,high);                                                     
    }
}

int main(){

    int arr[]={5, 2, 3, 1, 7, 8, 9, 4, 0, 6};
    int low=0;
    int size=10;

    printf("Before sorting:\n");
    display(arr,size);
    quickSort(arr,low,size-1);
    printf("After sorting:\n");
    display(arr,size);
    getch();
    return 0;
}