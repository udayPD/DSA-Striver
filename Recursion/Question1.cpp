//Write your name 5 times using Recursion

#include<iostream>
using namespace std;

void function(int i,int n){
    if(i>n) return;
    cout << " My name is Uday!!\n";
    function(i+1,n);
}
int main(){
    int n;
    cout << "Enter the number of times: ";
    cin >> n;
    function(0,n);
    return 0;
}





