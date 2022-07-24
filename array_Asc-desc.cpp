#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  vector<int>a;

  
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  sort(a.begin(),a.end());
  
  for(int i=0;i<=n/2-1;i++){
    cout<<a[i]<<" ";
}
  
  for(int i=n-1;i>=n/2;i--){
   cout<<a[i]<<" "; 
  }
  
}
