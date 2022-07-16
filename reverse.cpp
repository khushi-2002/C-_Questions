#include<iostream>
using namespace std;


int main(){
    int a,ans=0;
    cin>>a;

    while(a!=0){
        int digit=a%10;
        ans= ans*10+digit;
        a=a/10;
    }
    cout<<ans;
}