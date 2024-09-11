#include<iostream>
using namespace std;

int min_value(int arr[], int size){
    int max_value_ = INT32_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < INT32_MAX) {
            max_value_ = arr[i];
        }  
    }
    return max_value_;    
}

int main() {

    int size ;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    cout << "Enter the " << size << " elements of the array " <<  endl;
    int arr[1000] ; // Never Use a Variable as the size of the array //
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  
    }

    cout << "The minimum value of the element in the array is : "<<min_value(arr, size);
    return 0;

}

// DO THE SAME FOR THE MAX_VALUE FUNCTION //