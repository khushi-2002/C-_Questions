#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  for(int i=1;i<=10++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
}
