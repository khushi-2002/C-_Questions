#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int num=0;
  for(int i=1;i<n/2;i++){
    if(n%i==0){
      num+=i;
    }
  }
  
  if(num==n){
    cout<<"Perfect Number";
  }
  else{
    cout<<"Not perfect Number";
  }
  
 return 0;
}
