#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    int num;
    cin>>num;
    arr.push_back(1);
    int carry = 0;
    for(int i =2;i<=num;i++){
        for(int j =0;j<arr.size();j++){
            int x = arr[j]*i+carry;
            arr[j] = x%10;
            carry = x/10;
        }
        while (carry)
        {
            arr.push_back(carry%10);
            carry /= 10;
        }
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
return 0;
}