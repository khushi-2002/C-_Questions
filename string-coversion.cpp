#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  getline(cin,str);
  
  for(int i=0;i<str.size();i++){
    
    if(i%2==0){
      str[i]= tolower(str[i]);
    }
    else{
      str[i]= toupper(str[i]);
    }
  }
  cout<<str;
  return 0;
}
