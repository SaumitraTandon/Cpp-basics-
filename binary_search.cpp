#include<iostream>
using namespace std;

void binary_search(int arr[], int size, int value) {

    int start = 0;
    int end = size - 1;

    int mid = (start + (end - start) / 2) ;   // To satisfy the testcases ((2^31) -1) 
    int sum = 0;
    while(start <= end) {

        if( arr[mid] == value ) {
            cout << mid << endl;
            sum = sum + 1;
        }
        // Go to the right //

        if( value > arr[mid] ) {
            start = mid + 1;
        }
        else {
            end = mid - 1;

        }

        mid = (start + (end - start) / 2);
    }

    if ( sum == 0) {
        cout << "Error" << endl;
    }

    else {
        cout << "Value Found!" << endl;
    }
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5 };
    int value;
    int size = 5;
    cout << "Enter the value" << endl;
    cin >> value;

    binary_search(arr, size, value);

}