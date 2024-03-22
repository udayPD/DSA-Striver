#include<iostream>
using namespace std;

int function(int n, int arr[]){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]=n){
           count = count + 1;
        }
    }
    return count;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int occurances = function(target,arr);

    cout << "The no of" <<  target << "is" << occurances;


}