#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            s = s.substr(0,i)+s.substr(i+1);
            i--;
        }
    }

    cout<<s;
}