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

void shiftingArrayToRight(int arr[],int num,int k){
    
    // Method 1

    // for(int j =0;j<k;j++){
    // int store = arr[num-1];
    // for(int i = num-1;i>0;i--){
    //     arr[i] = arr[i-1];
    // }
    // arr[0] = store;
    // }


    // Method 2
    int temp[k];
    int j =0;
    for(int i=num-k;i<num;i++){
        temp[j++]= arr[i];
    }
    for(int i =num-1;i>0;i--){
        arr[i] = arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i] = temp[i];
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
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
    // sorted(arr,num);

    //Question 4
    shiftingArrayToRight(arr,num,2);
return 0;
}