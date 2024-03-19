// Print the following pattern 
//       *  
//      * *  
//     * * * 
//   * * * * * 
// * * * * * * * 

#include<iostream>
using namespace std;

void pattern7(int n){
    for(int i=0;i<n;i++){
        //for SPACE 
        for(int j=0;j<n-i-1;j++){
            cout << "-";
        }
        //for STAR
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        //for SPACE 
        for(int j=0;j<n-i-1;j++){
            cout << "-";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern7(n);
    }