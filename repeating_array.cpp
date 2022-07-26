#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
  int a[100];
  map<int,int>m;
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
  }
  
  for(auto e: m){
    if(e.second>=2){
      cout<<e.first<<" ";
    }
  }
  
  return 0;
  
}
