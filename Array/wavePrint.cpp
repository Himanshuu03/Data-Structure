#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int num;
    // cin>>num;
    vector< vector<int> >arr;
    for(int i =0;i<3;i++){
        vector<int> nums;
        for(int j=0;j<4;j++){
            int n;
            cin>>n;
            nums.push_back(n);
        }
        arr.push_back(nums);
    }
    for(int i =0;i<arr[0].size();i++){
        if((i & 1) == 0){
            for(int j =0;j<arr.size();j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j =arr.size()-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}