#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, maxi=INT_MIN, mini=INT_MAX, smaxi=INT_MIN, smini=INT_MAX;
  cin>>n;
  int a[n];
  
  if(n==0 ||n==1){
    cout<<-1<<" "<<-1;
  }
  for(int i=0;i<n;i++){
    cin>>a[i];
   maxi= max(maxi,a[i]);
   mini = min(mini, a[i]);
  }
  
  for(int i=0;i<n;i++){
    if(smaxi<a[i] && a[i]!=maxi){
      smaxi=a[i];
    }
    if(smini>a[i] && a[i]!=mini){
      smini = a[i];
    }
  }
  
  cout<<smini<<" "<<smaxi;
  
}
