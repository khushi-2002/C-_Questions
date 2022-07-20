#include<iostream>
using namespace std;


int f(int n){
  int ans=0;
  for(int i=1;i<=n/2;i++){
    if(n%i==0){
          ans=ans+i;
    }
  }
  return ans;
}
int main(){
  int a,b;
  cin>>a>>b;
  int ans1=0;
  int ans2=0;
  ans1= f(a);
  ans2=f(b);

  if(ans1==b && ans2==a){
    cout<<"True";
  }
  else{
    cout<<"False";
  }
}

  
  
