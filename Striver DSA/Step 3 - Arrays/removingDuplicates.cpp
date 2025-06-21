
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main() {
    int arr[] = {1,3,5,4,87,3,7,3,4,4,4,4,68,8,5,4,3,67,8,7,5,2,8,95,3,8,45,346,86,7646,8,7,7,77,4,4,3,33,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    
    for (int i = 0; i < k; i++) 
    {
        cout << arr[i] << " ";
    }
}

