#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,d,n;
    cin>>a>>d>>n;

    float sum= (a*(pow(d,n)-1))/(d-1);
    cout<<sum;
}
