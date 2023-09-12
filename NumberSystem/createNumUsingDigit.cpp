#include<iostream>
using namespace std;
int convert(int num){
    int ans=0; 
    for(int i =0;i<num;i++){
        cout<<"Enter the digit"<<endl;
        int dig;
        cin>>dig;
        ans = ans*10+dig;
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    cout<<convert(num);
return 0;
}