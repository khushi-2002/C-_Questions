#include<iostream>
using namespace std;

int fac(int n){
  int ans=1;
  
  while(n!=0){
    ans=n*ans;
    n=n-1;
  }
  return ans;
}
int main(){
  string s;
  cin>>s;
  map<char, int>mp;
  
  for(int i=0;i<s.size();i++){
    mp[s[i]]++; 
}
  int ans= fac(s.size());
  for(auto i:mp){
    int ans= ans/fac(i.second);
  }
  
  cout<<ans;
}
  
