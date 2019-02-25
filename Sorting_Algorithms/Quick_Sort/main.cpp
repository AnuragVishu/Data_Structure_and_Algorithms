/**
    QUICK SORT
    TIME COMPLEXITY: Worst Case - O(n^2)
**/

#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j=low; j<=high-1; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){

    if(low<high){
        int PartitionIndex = partition(arr,low,high);

        quickSort(arr,low,PartitionIndex-1);
        quickSort(arr,PartitionIndex+1,high);
    }
}

void printSortedArray(int arr[], int size){
    for(int i=0; i<size;i++)
        cout<< arr[i]<< " ";
    cout<<"\n";
}

int main(){
    cout<<"..............................Quick Sort................................\n\n";
    int arr[10];
    cout<<"Enter the elements of the array: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
        cin>>arr[i];

    quickSort(arr,0,size-1);
    cout<<"\nThe sorted array is: ";
    printSortedArray(arr,size);

    return 0;
}
