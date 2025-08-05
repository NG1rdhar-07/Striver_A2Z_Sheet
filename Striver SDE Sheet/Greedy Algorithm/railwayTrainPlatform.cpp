#include <bits/stdc++.h>
using namespace std;

int platforms (vector<int> &arrival, vector<int> &departure)
{
    int platformCount = 1;
    int soln = -1;

    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());

    int y= 1;
    int x= 0;

    while(x < arrival.size() && y < arrival.size())
    {
        if(departure[x] >= arrival[y]) // pehle wali train late depart kregi
        {
            platformCount++;
            y++;
        }

        else if (departure[x] < arrival[y]){
            platformCount--;
            x++;
        }
        soln = max(soln, platformCount);
    }
    return soln;
}

int main() {
    return 0;
}