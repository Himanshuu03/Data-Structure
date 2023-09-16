#include<iostream>
#include<vector>
using namespace std;
vector <int> moveElement(vector<int>arr){
    // int left = 0;
    // int right = arr.size()-1;
    // int i =0;
    // while(left <= right){
    //     if(arr[left] <= -1){
    //         arr[i++] = arr[left];
    //         left++;
    //     }
    //     else{
    //         swap(arr[left],arr[right]);
    //         right--;
    //     }
    // } 
    // return arr;


    //another way
    int i =0;
    int insert = 0;
    while(i<arr.size()){
        if(arr[i] < 0){
            swap(arr[insert++],arr[i]);
        }
        i++;
    }
    return arr;
}
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}
int main(){
    // vector <int> arr;
    // for(int i =0;i<7;i++){
    //     int n;
    //     cin>>n;
    //     arr.push_back(n);
    // }
    //Question 1
    // vector<int>newArr = moveElement(arr);
    // for(int i=0;i<newArr.size();i++){
    //     cout<<newArr[i]<<" ";
    // }

return 0;
}