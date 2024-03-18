//Print from 1 to n using backtracking 

#include<iostream>
using namespace std;

void function(int i,int n){
    if(i < 1) return;
    function(i-1,n);
    cout << i << " ";
}
int main(){
    int n;
    cin >> n;
    function(n,n);
}