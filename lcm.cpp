#include<iostream>
using namespace std;


int main(){
  
  int a,b;
  cin>>a,b;
  int max= (a>b)?a:b;
  for(int i=max;i<=a*b;i++){
    if(i%a==0 && i%b==0){
      cout<<"lcm Is "<<i;
      break;
    }
  }
}
