#include<iostream>
using namespace std;

int main (){

    int n;
    cin >> n;

    int row = 1;

    while (row <= n){

        //printing spaces.
        int spaces =n-row;
        while (spaces){
            cout << " ";
            spaces--;
        }
        //printing stars
        int col = 1;
        while (col <= row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

}
