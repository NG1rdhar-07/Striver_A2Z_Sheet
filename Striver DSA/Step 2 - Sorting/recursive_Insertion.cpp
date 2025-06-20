#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n, int i)
{
        if (i == n) return; // Base case...jab pura end tak chal gya !!!

        int j =i;
        while(j>0 && arr[j]<arr[j-1]){ // agar left side wala bada element hai!!
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--; // left side wale element par move kar jao abb !!
        }

        InsertionSort(arr, n, i+1);
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

    InsertionSort(arr, n, 0);
    
    for(int i =0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}