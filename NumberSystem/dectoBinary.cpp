#include<iostream>
#include<cmath>
using namespace std;

//by division method
int decToBinary(int n){
    int ans = 0;
    int i =0;
    while (n!=0)
    {
        int bit = n%2;
        ans = bit*pow(10,i++)+ ans;
        n= n/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decToBinary(n);
return 0;
}