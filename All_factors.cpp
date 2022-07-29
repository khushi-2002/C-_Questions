#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int a;
  cin>>a;
  int factor;
  
  for(int i=0;i<=sqrt(a);i++){
    factor=n/i;
    if(n%i==0 && factor!=i){
      
      cout<<i<<" "<<factor;
      
    }
    else if(n%i==0){
      cout<<i<<" ";
    }
  }
}
