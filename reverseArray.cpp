#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start =0;
    int end =n-1;

    while (start <=end){
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}



void printArray(int arr[], int n){

    for (int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
}

int main (){

    int arr[6] = {3, 2, 7, 11, 32, 65};
    int brr[7] = {2, 12, 33, 54, 7, 9, 2};

    reverse (arr, 6);
    reverse (brr, 7);

    printArray (arr, 6);
    printArray (brr, 7);

    return 0;
}