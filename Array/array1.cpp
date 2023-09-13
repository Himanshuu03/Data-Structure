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

int findMinInTheArray(int arr[] ,int num){
    int max = INT_MAX;
    for(int i =0;i<num;i++){
        if(arr[i]<max){
            max = arr[i];
        }
    }
    return max;
}

int* reverseArr(int arr[] ,int num){
    int left = 0;
    int right = num - 1;
    while (left<=right){
        swap(arr[left],arr[right]);
        left ++;
        right --;
    }
    return arr;
}

void extermePrint(int arr[],int num){
    int left = 0;
    int right = num-1;
    while (left <= right)
    {
        if(left == right){
            cout<<arr[left];
        }
        else{
          cout<<arr[left]<<" "<<arr[right]<<" ";    
        }
        left++;
        right--;
    } 
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

    //Question 3
    //cout<<findMinInTheArray(arr,num);

    //Question 4
    // int* newArr = reverseArr(arr,num);
    // for(int i =0;i<num;i++){
    //     cout<<newArr[i];
    // } 

    //Question 5
    extermePrint(arr,num);
}