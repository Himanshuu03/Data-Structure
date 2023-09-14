#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<3;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    
    vector<int>v2 = v;
    sort(v2.begin(),v2.end());
    for(int i=0;i<v2.size();i++){
        cout<<v2.at(i)<<" ";
    }
    // vector<int>arr(5,-1); ( 5-size -1 is value )intilize with a particular element and size but it is dynamically
    // or 
    // vector<int>arr = {1,2,3};
    // or  
    // vector<int>arr{1,2,3}

return 0;
}