
/*
    BUBBLE SORT
    big(O) time complexity: O(n^2)
*/


#include <bits/stdc++.h>
using namespace std;

int BubbleSort(int a[]){
    int temp=0;
    for(int i=0;i<10;i++)
        for(int j=0;j<10-1;j++){
            if(a[i]>a[j]){
                temp = a[i];            ///SWAPPING
                a[i] = a[j];
                a[j] = temp;
            }
            else continue;
        }
    return *a;                          ///RETURNING ADDRESS OF 1st ELEMENT, a[0]
}
int main()
{
    cout<<"....................BUBBLE SORT....................." << "\n\n";
    int a[10];                              ///DECLARING AN ARRAY OF SIZE 10
    cout <<"Enter the numbers "<<endl;
    for(int i=0;i<10;i++){                  ///TAKING USER INPUT
        cin >> a[i];
    }
    BubbleSort(a);
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
    return 0;
}
