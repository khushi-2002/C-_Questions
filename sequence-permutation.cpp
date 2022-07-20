#include<iostream>
#include<map>

using namespace std;

int main(){

  int n;
  cin>>n;
  int a[n];
  int maxi=0;
  map<int,int>m;
  for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
    maxi= max(maxi,a[i]);
}
  
  for(auto e: m){
    if(e.first==maxi && e.second>1){
      cout<<false;
      return 0;
  }
    else if(e.second>2){
      cout<<false;
      return 0;
    }
  }
  
  cout<<true;
}
  
  
