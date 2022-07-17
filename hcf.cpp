#include<iostream>
using namespace std;


int main(){
  int a,b;
  int r,hcf;
  cin>>a>>b;
  int min=0;
  int max=0;
  if(a>b){
    min=b;
    max=a;
  }
  else{
    min=a;
    max=b;
  }
  
  while(true){
     hcf=min;
     r=max%min;
    if(r==0){
      break;
    }
    max=min;
    min=r;  
  }
  cout<<"Hcf is "<<hcf;
}
