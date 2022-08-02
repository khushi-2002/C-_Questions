#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    string a;
    int flag=0;
    cin>>a;
    int s=0;
    int e=a.size()-1;
    while(s<e){
       if(a[s]==a[e]){
        s++;
        e--;
       }
       else{
        flag=1;
        break;
       }
    }
    if(flag==0){
        cout<<"Palindrome String";
    }
    else{
cout<<"Not palindrome string";
    }
    
}