#include<bits/stdc++.h>
using namespace std;

bool isPalidrome(int i, string &s)
{
    if(i>=s.length()/2)
    {
        return true;
    }

    if(s[i] != s[s.length()-i-1])
    {
       return false; 
    }
    return isPalidrome(i+1, s);
}

int main(){
    cout << "Enter the string\n";
    string s;
    cin >> s;
    cout << isPalidrome(0,s);
    return 0;
}