#include<iostream>
using namespace std;

int main(){
    int n1,n2,n;
    n1=0;
    n2=1;
    cin>>n;
 
 if(n==1){
    cout<<n1<<endl;
 }
 else if(n==2){
    cout<<n2<<endl;
 }
 else{
    cout<<n1<<endl;
    cout<<n2<<endl;
    for(int i=3;i<=n;i++){
        int c= n1+n2;
        cout<<c<<endl;
        n1=n2;
        n2=c;
    }
 }
   
}