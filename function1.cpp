#include<iostream>
using namespace std;

bool isEven(int a){

    if (a&1){
        return 0;
    }
    return 1;
}
   

int main(){

    int a;
    cin >> a;

    int answer = isEven(a);
    
    if (answer ){
        cout << "number is even" << endl;
    }else {
        cout << "number is odd" << endl;
    }

    return 0;
}