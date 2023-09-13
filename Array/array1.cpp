#include<iostream>
#include<limits.h>
using namespace std;

bool linearSearch(int arr[],int num,int find){
    bool check = false;
    for(int i=0;i<num;i++){
        if(arr[i] == find){
            return true;
        }
    }
    return false;
}

void countZeroOnes(int arr[],int num){
    int ones=0,zeros =0;
    for(int i=0;i<num;i++){
        if(arr[i] == 1){
            ones++;
        }
        if(arr[i] == 0){
            zeros++;
        }
    }
    cout<<"The zero are"<<zeros<<endl;
    cout<<"The ones are"<<ones<<endl;
}

int findInTheArray(int arr[] ,int num){
    int max = INT_MAX;
    for(int i =0;i<num;i++){
        if(arr[i]<max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin >> arr[i];
    }


    //Question 1
    // cout<<"Enter the num you want to find"<<endl;
    // int find;
    // cin>>find;
    // cout<<linearSearch(arr,num,find);

   //Question 2
   // countZeroOnes(arr,num);
}