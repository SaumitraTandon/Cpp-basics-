#include<iostream>
using namespace std; 

void printarray (int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;
    }
    cout << " Printing Done!" << endl;
}

int main() {

/*
    // Declaring the array //
    
    int number[15];
    cout << " Everything is Fine" << endl;
    cout << "Value at index 20 of the array is : " << number[20] << endl;
    
    // Initializing the array //
    int second[3] = {5, 7, 11} ;

    // Accesing the element //
    cout << "value at 2 index " << second[2] << endl;
*/
    int second[3] = {5, 7, 11} ;
    printarray(second, 3);

    int size = sizeof(second) / sizeof(int); // Size of int = 4 //
    cout << "size of second is : " << size ;
    
    char ch[5] = {'a' , 'b', 'c'};

}