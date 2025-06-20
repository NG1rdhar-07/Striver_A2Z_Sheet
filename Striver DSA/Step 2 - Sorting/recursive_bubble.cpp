#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    int i = n;
    if(i>0) // I was using while here, which was doing blunder because....i kabhi update hi nhi ho rha tha !!
    {
        for(int j =0; j<i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        bubble(arr, i-1);
        return;
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