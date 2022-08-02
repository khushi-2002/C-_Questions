#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    
    for(int i=0;i<s.length();i++){
        if((int)s[i]>=97 && (int)s[i]<=122){
           
        }
        else{
             s=s.substr(0,i)+s.substr(i+1);
             i--;
        }
    }
    cout<<s;
}