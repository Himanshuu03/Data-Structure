#include<iostream>
using namespace std;
int findUnique(int arr[] ,int size){
    int ans = 0;
    for(int i =0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
void printPair(int arr[] ,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    // Question 1
    // cout<<findUnique(arr,num);

    // Question 2
    printPair(arr,num);
return 0;
}