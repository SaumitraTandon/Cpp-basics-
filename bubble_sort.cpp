#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (end != start ) {
        int pointer = 0;
        while (pointer < end) {
            if (arr[pointer] > arr[pointer + 1]) {
                swap(arr[pointer], arr[pointer + 1]);           
            
            }
            pointer++;
        }
        end--;
    }
}

void print_array (int arr[], int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {2,5,3,9,6,69,0};
    int size = 7;
    bubble_sort(arr, size);
    print_array(arr, size);
}