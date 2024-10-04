#include<iostream>
using namespace std;

void selection_sort ( int arr[], int size) {
    for (int start = 0; start < size; start ++) {
        int min_index = start;
        for ( int index = start + 1; index < size; index ++) {
            if ( arr[index] < arr[min_index]) {
                min_index = index;
            }
        }
        swap(arr[start], arr[min_index]);
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[5] = {40,0,69,-4,100};
    int size = 5;
    selection_sort(arr, size);
    print_array(arr, size); 
}