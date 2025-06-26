#include<bits/stdc++.h>
using namespace std;

int linearSearch (int arr[], int n, int element)
{
    int index = -1;
    for(int i =0; i<n; i++)
    {
        if(arr[i] == element)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int ele;
    cout << "Enter the number of elements of array :\n";
    int n;
    cin >> n;
    cout << "Enter elements of array :\n";
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter element to find\n";
    cin >> ele;
    cout << linearSearch(arr, n, ele);

    return 0;
}