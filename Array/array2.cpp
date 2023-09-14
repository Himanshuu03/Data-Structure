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
void sorted(int arr[],int size){
    int left = 0;
    int right = size-1;
    int i = 0;
    while(left <= right){
        if(arr[left] == 0){
            arr[i] = arr[left];
            i++;
            left++;
        }
        else{
            swap(arr[left],arr[right]);
            right--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
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
    // printPair(arr,num);

    //Question 3
    sorted(arr,num);
return 0;
}