#include<iostream>
#include<bits/stdc++.h>
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
int main(){
 int n;
 cin>>n;
 float p=INT_MIN; 
 vector<int>a=  input(n); 
 sort(a.begin(), a.end());
  if(n%2==0){
    int x = n/2;
      p=(a[x-1]+a[x])/2;
  }
  else{
    p=a[(n-1)/2];
  
  }
  cout<<p;
  
}
