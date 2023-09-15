#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v;
    // for(int i=0;i<3;i++){
    //     int num;
    //     cin>>num;
    //     v.push_back(num);
    // }
    // v.pop_back();
    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
    
    // vector<int>v2 = v;
    // sort(v2.begin(),v2.end());
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2.at(i)<<" ";
    // }


    //Jagged Array
    vector< vector<int> >brr;
    vector<int>arr1(5,0);
    vector<int>arr2(2,1);
    vector<int>arr3(3,2);
    vector<int>arr4(1,3);
    vector<int>arr5(4,-1);
    brr.push_back(arr1);
    brr.push_back(arr2);
    brr.push_back(arr3);
    brr.push_back(arr4);
    brr.push_back(arr5);
    for(int i =0;i<brr.size();i++){
        for(int j =0;j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }




    // vector<int>arr(5,-1); ( 5-size -1 is value )intilize with a particular element and size but it is dynamically
    // or 
    // vector<int>arr = {1,2,3};
    // or  
    // vector<int>arr{1,2,3}

return 0;
}