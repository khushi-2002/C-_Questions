#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int ans=0;
    while(a!=0){
        int digit= a%10;
        ans=ans+digit;
        a=a/10;
    }
    cout<<ans;
}