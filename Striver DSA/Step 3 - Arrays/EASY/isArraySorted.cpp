#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int Arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(Arr[i]<Arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;

  printf("%s", isArraySorted(arr, n) ? "True" : "False");

}