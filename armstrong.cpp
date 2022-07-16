#include<iostream>
using namespace std;

int main(){
    int a,r;
    cin>>a;
    r=a;
    int ans=0;
    while(r!=0){
        int digit=r%10;
        ans = ans+digit*digit*digit;
        r=r/10;
    }
    if(a==ans){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Unfortunately I am not an armstrong!";
    }
}