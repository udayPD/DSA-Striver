// * * * * 
// * * * * 
// * * * *
// * * * *

#include<iostream>
using namespace std;

void Pattern1(int n){
    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the no of rows you want to enter: ";
    cin >> n;
    Pattern1(n);


}

// #include<iostream>
// using namespace std;

// int pattern1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter the no of rows you want to enter: ";
//     cin >> n;
//     pattern1(n);
// }

