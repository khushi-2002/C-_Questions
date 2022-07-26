#include<iostream>
#include<bits/stdc++.h>
using namespace std;


insertion (int* a, int n, int p){
  for(int i=n-1;i>=0;i--){
    a[i+1]=a[i];
  }
  a[0]=p;
}

int main(){
  int arr[100];
  int n;
  int value;
  cin>>n;
  cin>>value;
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  insertion(arr,n,value);
  
  for(int i=0;i<n+1;i++){
    
    cout<<arr[i]<<" ";
  }
}
