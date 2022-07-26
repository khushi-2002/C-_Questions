#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> input(int n){
  vector<int>p;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    p.push_back(x);
  }
  return p;
}
int main(){
  int n;
  cin>>n;
  float avg=0;
    vector<int>p= input(n);
  for(auto i: p){
    avg=i+avg;
  }
  
  cout<<avg/n;
  
}
