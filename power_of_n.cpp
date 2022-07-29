#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int ans=1;
  
  while(k!=0){
    if(k%2==0){
      n=n*n;
      k=k/2;
    }
    else{
      ans=ans*n;
      k=k-1;
    }
    
  }
  
  cout<<ans;
  
  
}
