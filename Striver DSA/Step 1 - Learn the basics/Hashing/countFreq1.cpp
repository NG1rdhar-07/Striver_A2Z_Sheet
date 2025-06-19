#include<bits/stdc++.h>
using namespace std;
void countFrequency(int arr[], int n)
{
    bool visited[n] = {false};

    for(int i =0; i<n; i++)
    {
        if(!visited[i])
        {
            int element = arr[i];
            visited[i] = true;
            int count = 0;

            for(int j =i+1; j<n; j++)
            {
                if(element == arr[j])
                {
                    count ++;
                    visited[j] = true;
                }
            }
            cout << element << " came "<< count + 1 << " time(s)." << "\n";
        }
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

    countFrequency(arr, n);

    return 0;
}