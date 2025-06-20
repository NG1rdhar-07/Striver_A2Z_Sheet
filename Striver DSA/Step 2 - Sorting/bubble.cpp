#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j =i; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    
    cout << "\n";

    cout << "After Sorting\n";

    bubble(arr, n);
    
    for(int i =0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}