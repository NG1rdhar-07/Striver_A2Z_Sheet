#include<bits/stdc++.h>
using namespace std;

void leftRotateK(int arr[], int n, int k)
{
    int temp[k];

    for(int i = 0; i<k ; i++)
    {
        temp[i] = arr[i];
    }

    for(int i = 0; i<n-k ; i++)
    {
        arr[i] = arr[k+i];
    }

    for(int i = n-k; i<n ; i++)
    {
        arr[i] = temp[i-(n-k)];
    }

    for(int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";  
    }
}

void rightRotateK(int arr[], int n, int k)
{
    int temp[n-k];

    for(int i = 0; i<n-k ; i++)
    {
        temp[i] = arr[i];
    }

    for(int i = 0; i<k ; i++)
    {
        arr[i] = arr[n-k+i];
    }

    for(int i = k; i<n ; i++)
    {
        arr[i] = temp[i-(k)];
    }

    for(int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";  
    }
}

int main(){
    string s;
    int steps;

     cout << "Enter the number of elements of array :\n";
    int n;
    cin >> n;
    
    cout << "Left(l) or Right(r)\n";
    cin >> s;

    cout << "How many steps to rotate\n";
    cin >> steps;

    cout << "Enter elements of array :\n";
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "After Rotating\n";

    if(s == "l")
    leftRotateK(arr, n, steps);

    else if(s == "r") 
    rightRotateK(arr, n, steps);


    return 0;
}