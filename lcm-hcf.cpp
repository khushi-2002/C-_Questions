#include<iostream>
using namespace std;

int main()
{
  int a,b,r,lcm,hcf;
  cin>>a>>b;
  int max= (a>b)?a:b;
  int min =(a<b)?a:b;
  
  while(true){
    r= max%min;
    if(r==0){
     hcf=min;
      break;
    }
    max=min;
    min=r;
  }
   
  int lcm= (a*b)/hcf;
  cout<<"HCF is "<<hcf<<endl;
  cout<<"LCM is "<<lcm<<endl;
}
