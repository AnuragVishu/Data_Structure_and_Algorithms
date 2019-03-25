#include <bits/stdc++.h>
using namespace std;

bool findElementLinearly(int arr[], int arrSize, int element){
    for(int i=0;i<arrSize;i++){
        if(arr[i] == element)
            return true;
    }
    return false;
}

int main()
{
    int element=0;
    int ARRAY_SIZE;

    cout<<"enter the size of array"<<endl;
    cin >> ARRAY_SIZE;

    int ARRAY_INPUT[ARRAY_SIZE];
    bool isElementFound=false;



    cout<<endl<<"enter the elements of the array"<<endl;
    for(int i=0;i<ARRAY_SIZE;i++)
        cin >> ARRAY_INPUT[i];

    cout<<endl<<"enter the element to be found"<<endl;
    cin>>element;

    isElementFound = findElementLinearly(ARRAY_INPUT, ARRAY_SIZE, element);
    if(isElementFound)
        cout<< endl <<"element found" << endl;
    else
        cout<< endl <<"not found"<<endl;
}
