/* A supermarket maintains a pricing format for all its products. A value N printed on each 
product.When the scanner reads the value N on the item,the product of all the digits in the value N 
is the price of the item. The task is to design a software such that given the code of any item N the 
product(multiplication) of all the digits of value should be computed(price).

Example 1:
Input:
5244 -->Value of N
Output:
160 -->Price
Explanation:
From the input above:
Product of the digits: 5,2,4,4
5*2*4*4 = 160
Hence Output is 160
*/

#include<iostream>
using namespace std;

int main(){
  int price;
  cin>>price;
  int ans=1;
  while(price!=0){
  int digit= price%10;
    ans*=digit;
    price=price/10;
  } 
  cout<<ans;
  return 0;
}
