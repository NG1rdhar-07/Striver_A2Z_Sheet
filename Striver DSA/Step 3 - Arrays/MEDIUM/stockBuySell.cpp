#include <bits/stdc++.h>
using namespace std;

int stocks(vector<int>arr)
{
    int maxProfit = 0;
    int min = INT_MAX;
    for(int i =0; i<arr.size(); i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] - min > maxProfit)
        {
            maxProfit = arr[i] - min;
        }
    }
    return maxProfit;
}

int main() {
    
     cout << "Enter size of stock prices data array :\n";
    int n;
    cin >> n;
    cout << "Enter prices :\n";
    vector<int> arr(n);

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Maximum Profit is : "<< stocks(arr);
    return 0;
}