#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int a;
  cin>>a;
  int maxi=INT_MIN;
  int mini=INT_MAX;
  while(n!=0){
    int digit=n%10;
    maxi= max(maxi,digit);
    mini= min(mini,digit);
  
  n=n/10;
}
  
 cout<<maxi;
  cout<<" "<<mini;
}
