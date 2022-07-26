#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
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

map<int,int> output(vector<int>p){
  map<int,int>a;
   for(int i=0;i<p.size();i++){
     a[p[i]]++;
  }
  return a;
}

int main(){
 int n;
 cin>>n;

 vector<int>a=  input(n); 
 map<int,int>m = output(a);
  
  for(auto i:m){
    cout<<i.first<<" ";
  }
}
