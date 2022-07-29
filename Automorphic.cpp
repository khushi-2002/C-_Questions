#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
  int n;
  cin>>n;
  int temp=n*n;
  int flag=0;
  
  while(n!=0){
    if(n%10!=temp%10){
      cout<<"false";
      flag=1;
      break;
    }
    n=n/10;
    temp=temp/10;
  }
  if(flag==0){
    cout<<"true";
  }
  
 return 0; 
}
