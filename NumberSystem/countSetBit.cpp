#include<iostream>
using namespace std;
int countBit(int num){
    int count =0;
    while(num != 0){
        int bit = num & 1;
        if(bit == 1){
            count ++;
        }
        num = num>>1;
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    cout<<countBit(num);
return 0;
}