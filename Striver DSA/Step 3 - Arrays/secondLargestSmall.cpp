#include<bits/stdc++.h>
using namespace std;

int secondsmallest(int arr[], int n)
{
    if(n<2)
	return -1;

    int small = INT_MIN;
    int secondSmall = INT_MIN;

    for(int j = 0; j<n; j++)
    {
        if(arr[j]<small)
        {
            secondSmall = small;
            small = arr[j];
        }

        else if (arr[j]>secondSmall && arr[j] != small)
        {
            secondSmall = arr[j];
        }
    }
    return secondSmall;
}

int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;

    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
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

    int sS=secondsmallest(arr,n);
    int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    
    return 0;
}