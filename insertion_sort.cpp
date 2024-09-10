#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size) {
    int position = 1;
    while (position < size) {
        int i = position;
        while (i != 0){
            if (arr[i] < arr[i - 1])  {
                swap(arr[i - 1], arr[i]);
            }
            i--;
        }
        position++;    
    }                       
}

/*
void insertion_sort(int arr[], int size) {
    for (int position = 1; position < size; position++) {
        int i = position;
        while (i > 0 && arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
            i--;
        }
    }
}
*/

void print_array (int arr[], int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {2,5,3,9,6,-4,0};
    int size = 7;
    insertion_sort(arr, size);
    print_array(arr, size);
}