//fiboacci series using recursion

#include<iostream>
using namespace std;

long long int nthFibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    long long int recCall1 = nthFibonacci(n-1);
    long long int recCall2 = nthFibonacci(n-2);

    int smallCal = recCall1 + recCall2;
    
    return smallCal;

}
int main(){

    int n;
    cout << "Enter the nth fibonacci number: ";
    cin >> n;

    if(n<0){
        cout << "Invalid, Enter a non-negative number!!!";

    }

    long long int smallCal = nthFibonacci(n);
    cout << "The" << n << "th fibonacci number is" << smallCal;
}
