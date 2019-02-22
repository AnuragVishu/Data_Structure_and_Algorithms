/**
    SELECTION SORT
    big O time complexity: Wrost case - O(n^2)

**/
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size){
    int MinId;
    for(int i=0; i<size-1 ;i++){
        MinId = i;
        ///Finding the minimum ID index and updating 'MinId' with it
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[MinId])
                MinId = j;                      ///UPDATING 'MinId' with the index consisting of minimum value
        }
        swap(&arr[MinId], &arr[i]);             ///SWAPPING THE
    }
}
int main()
{
    cout<<"..........................SELECTION SORT........................"<<endl<<endl;
    int a[10];
    cout << "Enter integer values: ";

    int ArrSize = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<ArrSize;i++)
        cin >> a[i];


    selectionSort(a, ArrSize);                ///STORING THE BASE ADDRESS OF THE ARRAY
    cout<<endl<<"The sorted array is: ";
    for(int i=0; i<10; i++)
        cout << a[i] << " ";
    cout << "\n";
    return 0;
}
