#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>input(int n){
  vector<int>p;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    p.push_back(x);
  }
  return p;
}

int main(){
  int n,k;
  cin>>n>>k;
  k=k+1;
  vector<int> a = input(n);
  vector<int>temp(n);
  
  for(int i=0;i<n;i++){
    temp[(i+k)%n]=a[i];
  }
  a=temp;
  
  for(auto i: a){
    cout<<i<<" ";
  }
}
