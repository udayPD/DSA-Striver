#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout << "Enter the elements: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 10;
    cout << arr[3] << endl;

    arr[2] = 10;
    cout << arr[2];
}