#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high){
    vector<int>temp;
    int lt = low;
    int rt = mid+1;

    while(lt<=mid && rt <= high)
    {
        if(arr[lt]<=arr[rt])
        {
            temp.push_back(arr[lt]);
            lt++;
        }

        else
        {
            temp.push_back(arr[rt]);
            rt++;
        }
    }

    while(lt<=mid){ //for left out elements in left sub-array
        temp.push_back(arr[lt]);
        lt++;
    }
    while(rt<=high){
        temp.push_back(arr[rt]);
        rt++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>&arr, int low, int high)
{
    if(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main() {
    cout << "Enter the number of elements of array:\n";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "After Sorting:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}