#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int suml=0, sumr=0;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int a=0;
    int b=0;

    while(a!=n && b!=n){
        suml= suml+arr[a][b];
        a++;
        b++;
    }

    a=0;
    b=n-1;

    while(a!=n && b!=-1){
        sumr= sumr+arr[a][b];
        a++;
        b--;
    }

    cout<<abs(suml-sumr);
}
