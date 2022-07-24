#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int a;
  cin>>a;
  int n[a];
  
  
  for(int i=0;i<a;i++){
    
    cin>>n[i];
    
  }
  int s=0;
  int e=a-1;
  while(s<e){
    int temp;
    temp=n[s];
    n[s]=n[e];
    n[e]=temp;
    s++;
    e--;
  }
  
  
  for(int i=0;i<a;i++){
    
    cout<<n[i]<<" ";
    
  }
 
}
