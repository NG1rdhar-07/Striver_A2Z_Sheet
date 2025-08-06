#include <bits/stdc++.h>
using namespace std;


struct Item{
    int price;
    int weight;
};


bool comparator(Item a, Item b)
{
    double r1 = (double)a.price / (double)a.weight;
    double r2 = (double)b.price / (double)b.weight;
    return r1 > r2;
}


double fKnp (int Weight, int noOfItems, Item arr[])
{
    sort(arr, arr+noOfItems, comparator);
     int currentWeight = 0;
     double finalValue = 0;

     for(int i =0; i<noOfItems; i++)
     {
        if(currentWeight + arr[i].weight <= Weight)
        {
            currentWeight += arr[i].weight;
            finalValue += arr[i].price;
        }
        else{
            int remain = Weight - currentWeight;
            finalValue += remain * ((double)arr[i].weight / (double)arr[i].price);
        }
     }
     return finalValue;
}


int main() {
    // write yourself...code bilkul thik hai :)o
    return 0;
}