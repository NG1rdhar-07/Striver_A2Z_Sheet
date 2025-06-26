#include <bits/stdc++.h>
using namespace std;

void MoveZeroes(vector<int> &arr, int n)
{
    int j = 0; 

    // non- zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    //fillling remaining positions with zeroes
    while (j < n)
    {
        arr[j] = 0;
        j++;
    }
}

int main()
{
    cout << "Enter the number of elements of array:\n";
    int n;
    cin >> n;

    cout << "Enter elements of array:\n";
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MoveZeroes(arr, n);

    cout << "After Moving Zeroes:\n";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}