#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> >arr;
    for(int i =0;i<3;i++){
        vector<int> nums;
        for(int j=0;j<3;j++){
            int n;
            cin>>n;
            nums.push_back(n);
        }
        arr.push_back(nums);
    }
    int startRow = 0;
    int endRow = arr.size()-1;
    int startCol = 0;
    int endCol = arr[0].size()-1;
    int total = arr.size()*arr[0].size();
    int count = 0;
    vector<int>ans;

    while(count < total){
        for(int i =startCol;i<=endCol && count<total ;i++){
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;
        for(int i =startRow;i<=endRow && count<total ;i++){
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;
        for(int i = endCol ;i>=startCol && count<total;i--){
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;
         for(int i = endRow ;i>=startRow && count<total;i--){
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}