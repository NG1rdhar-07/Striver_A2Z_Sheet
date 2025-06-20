#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        int x = 0;
        int min = arr[i];
        for(int j =i+1; j<n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                x = j;
            }
        }

        if(x!=0)
        {
            int temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp;
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

    selectionSort(arr, n);
    
    for(int i =0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}