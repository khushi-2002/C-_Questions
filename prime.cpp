#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;
    int flag=0;

    for(int i=2;i<a/2;i++){
        if(a%i==0){
         flag=1;
         break;           
        }
    }
    if(flag==0){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not prime Number";
    }
}