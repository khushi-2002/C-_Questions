#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
  if(n==0 || n==1){
    return n;
  }
  return factorial(n-1)*n;
}
int main(){
  int a;
  int temp=a;
  int ans=0;
  while(temp!=0){
    int digit= temp%10;
    ans=ans+ factorial(digit);
    temp=temp/10;
    
  }
  
  if(ans==a){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
  
  
  
  
  
  
}
