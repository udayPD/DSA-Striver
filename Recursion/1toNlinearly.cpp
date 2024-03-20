//Print 1 to n linearly

#include<iostream>
using namespace std;

void function(int i,int n){
    if( i > n) return;
    cout << i;
    function(i+1,n);
}
int main(){

    int n;
    cin >> n;
    function(1,n);
    return 0;
}
