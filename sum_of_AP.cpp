#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,d,n;
    cin>>a>>d>>n;

    int sum= (n/2)*(2*a+(n-1)*d);
    cout<<sum;
}
