#include<bits/stdc++.h>
using namespace std;
vector<int> un(int arr1[], int arr2[], int n, int m)
{
    set<int> st;
    vector<int> un;

    for(int i =0; i<m; i++)
    {
        st.insert(arr1[i]);
    }

    for(int i =0; i<n; i++)
    {
        st.insert(arr2[i]);
    }

    for(auto & it : st)
    {
        un.push_back(it);
    }

    return un;
}

int main(){
    // ... :) yeh toh khud kr loge !!
    return 0;
}