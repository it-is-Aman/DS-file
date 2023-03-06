#include <stdio.h>
#include <conio.h>

void display(int arr[], int size){
    int i;      
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void merge(int arr_1[], int low, int mid, int high){
    int i=low;                                                                                    
    int j=mid+1;                                                                                  
    int k=low;                                                                                    
    int arr_2[100];

    while(i<=mid && j<=high){                                                                     
        if(arr_1[i]<arr_1[j]){                                                                    
            arr_2[k]=arr_1[i];
            i++;
            k++;
        }
        else{                                                                                     
            arr_2[k]=arr_1[j];
            j++;
            k++;
        }
    }                                                                                             
    while(i<=mid){                                                                                
        arr_2[k]=arr_1[i];
        i++;
        k++;
    }
    while(j<=high){                                                                               
        arr_2[k]=arr_1[j];
        j++;
        k++;
    }

    for(i=low;i<=high;i++){                                                                   
        arr_1[i]=arr_2[i];
    }
}

void mergeSort(int arr[], int low, int high){
    int mid;
    if(low < high){                                                                                  
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);                                                                  
        mergeSort(arr, mid + 1, high);                                                             
        merge(arr, low, mid, high);                                                                
    }
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5, 6, 9, 8, 7, 0};
    int size = 10;

    int low = 0;
    int high = 9;
    
    printf("Before sorting:\n");
    display(arr, size);
    mergeSort(arr, low, high);
    printf("After sorting:\n");
    display(arr, size);
    getch();
    return 0;
}