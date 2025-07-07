#include <bits/stdc++.h>
using namespace std;

void leaders(vector <int> arr)
{
    int  n = arr.size();
    int left = 0;
    int right = 1;
    bool isLeader = true;

    while(left < right && left < n)
    {
        while(right < n)
        {
            if(arr[left] > arr[right])
            {
                isLeader = false;
                left ++;
                right ++;
                break;
            }

            else{
                right ++;
            }
        }
        if(isLeader)
        cout << arr[left];
    }
}


int main() {
    vector<int> temp;
    cout << "Enter the number of elements of array:\n";
    int n;
    cin >> n;
    cout << "Enter elements of array:\n";
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Leaders are :\n";
    leaders(arr);
    return 0;
}