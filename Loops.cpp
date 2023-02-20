#include <iostream>
using namespace std;

//sum of n numbers.
int main (){

    int n;
    cin >> n;

    int i = 0;
    int sum = 0;

    while (i<=n){
        sum = sum + i;
        i = i + 1;
    }

    cout << "the value of sum is "<< sum << endl;
//end of the program.

    
}
 