#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    int vowel=0;
    int consonents=0;
    int white_space=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
           vowel++;
        }
        else if(s[i]== ' ' ){
           white_space++;
        }
        else{
            consonents++;
        }
    }
    cout<<"Vowels "<<vowel<<endl;
    cout<<"Consonents "<<consonents<<endl;
    cout<<"white Space "<<white_space<<endl;
}