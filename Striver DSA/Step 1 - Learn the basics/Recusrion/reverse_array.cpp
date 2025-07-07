#include <bits/stdc++.h>
using namespace std;

void printRev(int arr[], int index) {
    if (index < 0) 
    return;  // base case
    
    cout << arr[index] << " ";
    printRev(arr, index - 1);  // recursive call
}

int main() {
    int arrEle = 5;
    int arr[arrEle];

    cout << "Enter array elements: ";
    for (int i = 0; i < arrEle; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    printRev(arr, arrEle - 1);

    return 0;
}
