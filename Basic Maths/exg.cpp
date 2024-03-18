#include<iostream>
using namespace std;


void isPalindrome(int x){
   if(x < 0) return false;
    if(x != 0 and x%10 == 0) return false;

   int reverse = 0;
   while(x>0){
    reverse = (reverse * 10) + x % 10;
    x = x / 10;
   }
   if(x == reverse ){
    cout << "Is Palindrome";
   }
   if(x == reverse/10){
    cout << "Is Palindrome";
   }
}
int main(){
   int n;
   cout << "Enter the number: ";
   cin >> n;
   isPalindrome(x);


}