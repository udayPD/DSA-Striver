// // Reverse an array using recursion
#include<iostream>
using namespace std;

// function
void reversearray(int arr[],int l,int r){
    if(l>=r) return;
    swap (arr[l],arr[r]);
    reversearray(arr,l+1,r-1);
}

int main(){
    // size of the array
    int n;
    cout << "Enter the size: ";
    cin >> n;

    //defining a array of size n
    int arr[n];
    cout << "Enter the array with " << n <<" elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //for the output
    cout << "Original array was: ";
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;

    //for the reversed array
    // caling the function 
    reversearray(arr,0,n-1);
    cout << "Reversed array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;
}