/* A shopkeeper has added a new collection of cosmetics to his shop. A parcel containing cosmetics has arrived from another 
country, and the number of products is huge. But, when he received the parcel, he notices that the price is missing on the 
product label. When he speaks to the product vendor, 
he gives him a trick to get the price of each product from the barcode printed on it.
The trick is as follows:
The shopkeeper has to find the ASCII value of every character on the barcode i If it is a 2-digit (or 3 digit) ASCII value. He 
has to note down only the maximum of the 2-digits (or 3 digits) for each character. The final price of the product will be 
the sum of all the numbers obtained from the ASCII value of each character on the barcode.
Given the barcode (B), find the final price of each product.
Note: The barcode can consist of letters (uppercase and lowercase) of the alphabet, numeric characters (0 to 9) and 
special characters.
the value of the numeric character is added (for example if the numeric character is 6 then 6 is added ignoring the 
corresponding ASCII value 54).
Example 1:
Input:
String
>> Value of B = 12ab ------ 1 2 a = 97 b = 98
price = 1+2+9+9 = 21 */



#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int maximum(int n){
  int max=0;
  
  // MAXIMUM DIGIT
  while(n!=0){
    int digit=n%10;
    if(digit>max){
      max=digit;
    }
    n=n/10;
  }
  return max;
}

int main(){
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<s.size();i++){
    
    // If it is digit then simply convert it into a digit and then add
    if(isdigit(s[i])){
      ans = ans + int(s[i])-48;
    }
    
    // If it is not then simply find the maximum digit and then add to the ans variable
    else{
      int num = int(s[i]);
      ans=ans+maximum(num);
    }
    
  }
  cout<<ans;
  
 return 0; 
}
