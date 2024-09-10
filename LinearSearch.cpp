#include<iostream>
using namespace std;

void BinarySearch (int arr[], int size,int value) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == value) {
            cout << "The value was found at " << i << endl;
        }
    }
    cout << "ERROR! The value  doesn't exist" ;
}

int main() {
    int array [5] = {1, 2, 3, 4, 5 };
    int size = 5;
    cout << "Enter the value which you want to find : ";
    int key;
    cin >> key;

    BinarySearch(array, size, key);
}