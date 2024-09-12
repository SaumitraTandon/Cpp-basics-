#include<iostream>
using namespace std;

void array_reverse ( int arr[], int size) {
    
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1, 4, 0, 5, -2, 15};
    array_reverse(arr, 6);
    print_array(arr, 6);
}