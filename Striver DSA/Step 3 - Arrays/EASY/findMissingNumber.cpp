#include<bits/stdc++.h>
using namespace std;

// Works if passed in order !!...else use summation approach

int missingNumber (int arr[], int n)
{
    int counter = 1;
    for(int i =0; i<n; i++)
    {
        if(arr[i] == counter)
        {
            counter ++;
        }

        else if(arr[i] != counter)
        {
            break;
        }
    }
    return counter;
}

int main(){

    cout << "Enter the number of elements of array :\n";
    int n;
    cin >> n;
    cout << "Enter elements of array :\n";
    int arr[n];

    for(int i =0; i<n-1; i++)
    {
        cin >> arr[i];
    }

    cout << missingNumber(arr,n) << " is the missing number\n";

    return 0;
}

// Nothing done today...insta pe time waste kiya aur reel banake so gya :)...kal padhunga pakka, aur bike bhi start kal se !!