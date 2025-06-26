#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n)
{
    int a1 = arr[0];
    for(int i = 0; i<n-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = a1;

    for(int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
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

    cout << "After Rotating\n";
    leftRotate(arr, n);

    return 0;
}