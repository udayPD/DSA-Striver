#include<iostream>
using namespace std;

int count = 0;
void function(){
    if(int count == 4) return;
    cout << count << endl;
    count++;
    function();
}


int main(){
    function();
}