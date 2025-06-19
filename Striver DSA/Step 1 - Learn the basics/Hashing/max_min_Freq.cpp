#include<bits/stdc++.h>
using namespace std;

void Freq(int arr[], int n)
{
    int minElement = 0;
    int maxFrequency = 0;
    int maxElement = 0;
    int minFrequency = n;

    unordered_map<int ,int> map;

    for(int i =0; i<n; i++) // adding all elements to the map
    {
        map[arr[i]] ++;
    }

    for (auto it : map) {
        int valueCount = it.second;
        int keyElement = it.first;

        if (valueCount > maxFrequency) { // just finding maximum kiske counts hain
            maxElement = keyElement;
            maxFrequency = valueCount;
        }
        if (valueCount < minFrequency) { // finds minimum kiske counts hain
            minElement = keyElement;
            minFrequency = valueCount;
        }
    }
     cout << "Highest frequency element is: " << maxElement << "\n";
    cout << "Lowest frequency element is: " << minElement << "\n";
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

    Freq(arr, n);

    return 0;
}