#include<iostream>
using namespace std;

bool isPrime (int n){

    for (int i=2; i<n; i++){
        if (n%i ==0){
            return 0;
        }
    }
    return 1;
}


int main(){

    int n;
    cin >> n;

    int answer = isPrime(n);
    
    if (answer){
        cout << "it is a prime number"<<endl;
    }else {
        cout<< "it is not a prime number"<<endl;
    }
}