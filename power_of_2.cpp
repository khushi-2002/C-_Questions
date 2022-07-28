#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int k;
  cin>>k;
  int ans=1;
  for(int i=1;i<=k;i++){
    ans= ans*2;
  }
  cout<<ans;
}
