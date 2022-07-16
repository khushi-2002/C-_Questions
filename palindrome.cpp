#include<iostream>
using namespace std;

int main(){
    int a, r;
    cin>>a;
    r=a;
    int ans=0;
    while(r!=0){
        int digit=r%10;
        ans=ans*10+digit;
        r=r/10;
    }
    if(ans==a){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Unfortunately! it's not a palindrome number";
    }

}