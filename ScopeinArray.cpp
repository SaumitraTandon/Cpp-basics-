#include<iostream>
using namespace std;

void update(int arr[] ,int n) {
    cout << endl << " Inside the function " << endl;

    // Updating the arrays 1st element //
    arr[0] = 120;

    // Printing the array //
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to the main function" << endl;
}

int main() {

    int arr[3] = {1, 2, 3};

    update(arr, 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Therefore working of arrays is different as compared to a variable as we saw previously //
// When we use int arr[3] we assing the address of arr //
// Therefore the original vaalue also gets updated // 
