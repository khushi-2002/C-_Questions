#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void insertion (int* a, int n, int p){
  for(int i=n-1;i>=0;i--){
    a[i+1]=a[i];
  }
  a[0]=p;
}

void insertion_last(int* a, int n, int p, int pos){
  a[n]=p;
}
void insertion_pos(int* a, int n, int p){
    for(int i=n-1;i>=pos;i--){
        a[i+1]=arr[i];
    }
    a[pos-1]=p;
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
  
  insertion_last(arr,n,value);
  
  for(int j=0;j<=n;j++){
    
    cout<<arr[j]<<" ";
  }
}
