#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[][2],int row,int col){
    int max = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int arr[2][2];
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Question1
    // cout<<findMax(arr,2,2);

    //Question 2
    // for(int i=0;i<2;i++){
    //     int sum = 0;
    //     for(int j =0;j<2;j++){
    //         sum = sum+arr[i][j];
    //     }
    //     cout<<sum<<endl;
    // }

    //Question 3
    // for(int i=0;i<2;i++){
    //     int sum = 0;
    //     for(int j =0;j<2;j++){
    //         sum = sum+arr[j][i];
    //     }
    //     cout<<sum<<endl;
    // }

    //Question 4
    // int sum =0;
    // for(int i=0;i<2;i++){
    //     sum = sum + arr[i][i];
    //     cout<<arr[i][i]<<" ";
    // }
    // cout<<sum;
return 0;
}