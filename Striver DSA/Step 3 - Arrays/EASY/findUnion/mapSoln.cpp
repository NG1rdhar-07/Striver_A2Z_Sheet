#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion (int arr1[], int arr2[], int n, int m)
{
    map<int, int> f;
    vector<int> un;
    
    for(int i = 0; i<n; i++)
    {
        f[arr1[i]]++;
    }

    for(int i = 0; i<m; i++)
    {
        f[arr2[i]]++;
    }

    for(auto & x : f)
    un.push_back(x.first); // In map we have <Element : Frequency> !!

    return un;
}

int main(){
    // ....CODE AA JAYEGA :) !!
    return 0;
}