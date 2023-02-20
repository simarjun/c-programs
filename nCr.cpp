#include<iostream>
using namespace std;


int factorial (int n){

    int fact =1;
    for (int i=0; i<=n; i++){
        fact = fact *i;
    }
    return fact;
}

int nCr (int n, int r){

    int num = factorial(n);
    int denom = factorial (r) *factorial(n-r);

    return num/denom;
}


int main(){

    int n, r;
    cin >>n >> r;

    int answer = nCr(n, r);

    cout << "answer is "<< answer <<endl;
    return 0;
}