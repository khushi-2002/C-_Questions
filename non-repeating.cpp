#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int arr[100];
    map<int,int>a;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        a[arr[i]]++;
    }

    for(auto i: a){
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }

}
