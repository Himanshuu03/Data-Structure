#include<iostream>
using namespace std;
void incrementbyValue(int n){
    n=n+1;
    cout<<n;
}
void incrementbyRef(int&n){
    n=n+1;
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    cout<<"I am new value";
    incrementbyValue(n);
    cout<<endl<<"I am old value"<<n<<endl;


    int n2;
    cin>>n2;
    cout<<"I am new value(Ref)";
    incrementbyRef(n2);
    cout<<endl<<"I am old value(Ref)"<<n2;

return 0;
}