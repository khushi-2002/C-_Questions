#include<iostream>
using namespace std;

int fabonacci(int n){
    if(n==1 || n==2){
    //    cout<<0;
    //    cout<<1;
    return n-1;
    }
    else{
        // int a=0;
        // int b=1;
        // cout<<a<<endl;
        // cout<<b<<endl;
        // while(n>2){
        //     int c=a+b;
        //     cout<<c<<endl;
        //     a=b;
        //     b=c;
        //     n--;
        // }
        return (fabonacci(n-1)+fabonacci(n-2));
    }
}


int main(){
 int n;
 cin>>n;

 cout<<fabonacci(n);
}
