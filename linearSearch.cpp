#include<iostream>
using namespace std;

bool search (int arr[], int n, int key){

    for (int i=0; i<n; i++){
        if (arr[i] == key){
            return 1;
        }
    }
    return 0;
}



int main (){

    int arr[10] = {2, 13, 22, 3, 1, 5, 8, 12, 34, 73};

    cout << "print the key to be searched"<< endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found){
        cout << "key is present "<< endl;
    }else {
        cout << "key is not present"<< endl;
    }

    return 0;
}