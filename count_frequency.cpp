#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;


int main(){
  int n;
  cin>>n;
  map <int, int>mp;
  int a[n];
  
  
  for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  
  for(auto i:mp){
    
    cout<<i.first<<" "<<i.second<<endl;
 
}
  return 0;
  
}
