#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;
    if(a<=1){
     cout<<"No prime Numbers";
    }
    else{
        for(int i=2;i<=a;i++){
            int flag=0;
            for(int j=2;j<=i/2;j++){
               if(i%j==0){
                flag=1;
                break;
               }
            }
            if(flag==0){
                cout<<i<<endl;
            }
        }
    }
   
}