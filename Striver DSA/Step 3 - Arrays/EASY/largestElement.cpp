#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
{
    int max = arr[0];
    for(int i =0; i<n; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    return max;
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
    
    cout << "\n Largest Element is:\n" << largestElement(arr,n);
    return 0;
}