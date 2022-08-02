#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);

    int st=0;
    int e=s.length()-1;

    while(st<e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    cout<<s;
}
