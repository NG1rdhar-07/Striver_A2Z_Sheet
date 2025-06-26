#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n)
{
    int max = arr[0];
    int smax = arr[0];

    for(int i =0; i<n; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }

    for(int i =0; i<n; i++)
    {
        if(arr[i]!=max && arr[i]>smax)
        smax = arr[i];
    }

    return smax;
}

int main(){
    cout << "Enter the number of elements of array :\n";
    int n;
    cin >> n;
    cout << "Enter elements of array :\n";
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "\n Second Largest Element is:\n" << secondLargestElement(arr,n);
    return 0;
}