// Print in the reverse order N to 1

#include<iostream>
using namespace std;

void function(int i,int n){
    if(i<1) return;
    cout << i;
    function(i-1,n);
}
int main(){
    int n;
    cin >> n;
    function(n,n);
}