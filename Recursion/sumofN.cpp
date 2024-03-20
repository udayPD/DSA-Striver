// Sum of first n numbers using recursion (Parameterised function)
#include<iostream>
using namespace std;

void sumOfFirstN(int i, int& sum) {
    if (i < 1) {
        cout << "Sum of first n numbers: " << sum;
        return;
    }

    sum += i;
    sumOfFirstN(i - 1, sum);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    sumOfFirstN(n, sum);
    return 0;
}



