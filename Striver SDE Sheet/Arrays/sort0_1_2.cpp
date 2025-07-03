#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--; 
        }
    }
    
    for(int i =0; i<n; i++)
    {
        cout << arr[i] << " "; 
    }
}

int main() {
    cout << "Enter the number of elements of array :\n";
    int n;
    cin >> n;
    cout << "Enter elements of array :\n";
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    sorting(arr, n);
    return 0;
}