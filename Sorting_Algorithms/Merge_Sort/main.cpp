#include <bits/stdc++.h>
using namespace std;
///int countt=0;
auto mergeElements(int arr[], int leftIndex, int mid, int rightIndex){     ///l -> Left_String; m -> Middle_Splitting_Point; r -> Right_String
    ///cout<<"Iteration "<<countt<<endl;
    int SizeStrLeft = mid - leftIndex + 1;
    int SizeStrRight = rightIndex - mid;
    ///cout<<"SizeStrLeft, SizeStrRight "<<SizeStrLeft<<", "<<SizeStrRight<<endl;
    ///cout<<"leftIndex "<<leftIndex<<", mid "<<mid<<", rightIndex "<<rightIndex<<endl;

    int LeftStr[SizeStrLeft];
    int RightStr[SizeStrRight];

    for(int i=0;i<SizeStrLeft;i++)
        LeftStr[i] = arr[leftIndex+i];
    for(int j=0;j<SizeStrRight;j++)
        RightStr[j] = arr[mid+1+j];

    int i=0,j=0,k=leftIndex;
    while(i<SizeStrLeft && j<SizeStrRight){
        if(LeftStr[i] <= RightStr[j]){
            arr[k] = LeftStr[i];
            i++;
        } else{
            arr[k] = RightStr[j];
            j++;
        }
        k++;
    }
        ///cout<<"leftIndex "<<leftIndex<<", mid "<<mid<<", rightIndex "<<rightIndex<<endl;
        ///cout<<"i "<<i<<", j "<<j<<", k "<<k<<endl;


    while(i<SizeStrLeft){
        arr[k] = LeftStr[i];
        i++;
        k++;
    }
    while(j<SizeStrRight){
        arr[k] = RightStr[j];
        j++;
        k++;
    }
    ///countt++;
}

void mergeSort(int arr[], int leftIndex, int rightIndex){
    if(leftIndex<rightIndex){
        int mid = leftIndex+(rightIndex-leftIndex)/2;

        mergeSort(arr, leftIndex, mid);
        mergeSort(arr, mid+1, rightIndex);

        mergeElements(arr, leftIndex, mid, rightIndex);
    }
}

void printResult(int Arr[], int ArrSize);

int main()
{
    cout<< "..........................MERGE SORT........................"<<endl;
    int a[10];
    cout << "Enter integer values: ";
    for(int i=0;i<10;i++)
        cin >> a[i];
    int size=10;
    mergeSort(a, 0, size-1);                ///STORING THE BASE ADDRESS OF THE ARRAY

    printResult(a, size);
    return 0;
}

void printResult(int Arr[], int ArrSize){
    cout << "\nSorted Elements: ";
    for(int i=0; i<ArrSize; i++)
        cout << Arr[i] << " ";
}
