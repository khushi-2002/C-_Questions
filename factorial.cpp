#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;
    int ans=a;

    for(int i=1;i<a;i++){
     cout<<ans<<" * "<<i<<" = ";
     ans=ans*i;
     cout<<ans<<endl;
    }
}