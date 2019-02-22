#include <bits/stdc++.h>
using namespace std;

auto InsertionSort(int b[]){

    int keyValue;
    int j=0;

    for(int i=0;i<10;i++){
        keyValue = b[i];
        j = i-1;

        while(j>=0 && b[j]>keyValue){
            b[j+1]=b[j];
            j = j-1;
        }
        b[j+1]=keyValue;
    }

    return &b[0];                   ///RETURNING THE ADDRESS OF THE 1ST INTEGER
}

int main()
{
    ///..........................INSERTION SORT........................
    int a[10];
    cout << "Enter integer values" << endl;
    for(int i=0;i<10;i++)
        cin >> a[i];

    auto *result = InsertionSort(a);                ///STORING THE BASE ADDRESS OF THE ARRAY

    for(int i=0; i<10; i++)
        cout << result[i] << " ";                   ///ITERATING OVER ARRAY USING THE BASE ADDRESS STORED IN 'result'

    return 0;
}
