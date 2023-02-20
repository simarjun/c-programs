#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;

}


void swapAlternate(int arr[], int size){

    for (int i=0; i<size; i+=2){
        if (i+1 < size){
            swap (arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {3,5,4,2,32,45,33,12};
    int odd [7] = {5,7,3,8,2,0,1};

    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(odd, 7);
    printArray(odd, 7);

    return 0;
}