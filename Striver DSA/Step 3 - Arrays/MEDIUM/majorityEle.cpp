#include <bits/stdc++.h>
using namespace std;
int majority(vector<int>arr) // Moore's Voting Algorithm
{   
    int n = arr.size();
    int element = arr[0];
    int count = 1;

    for(int i =1; i<n; i++)
    {
        if(count == 0)
        {
            element = arr[i];
            count = 1;
        }

        else if(element == arr[i])
        {
            count++;
        }

        else
        {
            count--;
        }
    }
    

    int cnt1 = 0; // To count ki jo last mein element bach rha hai, kya woh n/2 se zyada baar aa rha hai ya nhi ??

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == element) cnt1++;
    }

    if (cnt1 > (n / 2)) return element;

    return -1;

}

int main() {

    cout << "Enter the number of elements of array :\n";
    int n;
    cin >> n;
    cout << "Enter elements of array :\n";
    vector<int> arr(n);

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Majorly Occuring Element is : "<< majority(arr);
    return 0;
}