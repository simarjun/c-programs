#include<iostream>
using namespace std;

void printNumbers (int n){

    for (int i=0; i<=n; i++){
        cout << i <<" ";
    }
}


int main (){

    int n;
    cin >> n;

    printNumbers (n);
}