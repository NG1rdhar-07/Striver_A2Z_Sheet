#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    unordered_map<int ,int> mpp;
    
    for(int i =0; i<n; i++)
    {
        mpp[arr[i]]++;
    }

    for(auto x : mpp)
    {
        cout << x.first << "->" << x.second << endl;
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

    freq(arr, n);

    return 0;
}