#include<iostream>
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

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin >> arr[i];
    }
    // cout<<"Enter the num you want to find"<<endl;
    // int find;
    // cin>>find;
    // cout<<linearSearch(arr,num,find);
}