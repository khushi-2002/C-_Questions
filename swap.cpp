#include<iostream>
using namespace std;

int main(){
    int a,b, temp;
    cin>>a>>b;
    // With the help of temp variable
   /* cout<<"BEFORE SWAPPING "<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
   cout<<"AFTER SWAPPING "<<a<<" "<<b; */

   // Without the help of temp variable
  /* cout<<"BEFORE SWAPPING "<<a<<" "<<b<<endl;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"AFTER SWAPPING "<<a<<" "<<b; */

   // With the help of XOR operator
   cout<<"BEFORE SWAPPING "<<a<<" "<<b<<endl;
   a=a^b; 
   b=a^b; 
   a=a^b;
   cout<<"AFTER SWAPPING "<<a<<" "<<b;
    
}
