#include <bits/stdc++.h>
using namespace std;

vector<int> kadaneAlg(vector<int> arr)
{
    int sum = arr[0]; // sum pichle wale tak kki value store karega....agar sum hi negative ho gya, matlab current wale element ko subarray ka first element maanke shuru krdo kaam !!
    int maxSum = arr[0];
    int start = 0, tempStart = 0, end = 0;

    for(int i = 1; i < arr.size(); i++)
    {
        if (sum < 0) { 
            sum = arr[i];
            tempStart = i;
        } else {
            sum += arr[i];
        }

        if (sum > maxSum) {
            maxSum = sum;
            start = tempStart;
            end = i;
        }
    }

    vector<int> finalSubarray;
    for (int i = start; i <= end; i++) {
        finalSubarray.push_back(arr[i]);
    }

    return finalSubarray;
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

    temp = kadaneAlg(arr);

    cout << "Final Sub Array is:\n";
    for (auto it : temp) {
        cout << it << " ";
    }

    return 0;
}
