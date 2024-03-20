// Count ways to reach nth stair Problem

#include<iostream>
using namespace std;

long long countWays(int n){
    if(n == 1 ) return n;
    if(n == 2 ) return n;

    long long int recursiveCall1 = countWays(n-1);
    long long int recursiveCall2 = countWays(n-2);

    int smallCal = recursiveCall1 + recursiveCall2;

    return smallCal;
}
int main(){

    int n;
    cin >> n;

    if(n<0){
        cout << "Invalid";
    }
    long long int smallcal = countWays(n);
    cout << "The no of ways one can climb is : " << smallcal;
}