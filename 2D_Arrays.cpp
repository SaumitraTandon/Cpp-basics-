#include<iostream>
#include<vector>
using namespace std;

void Is_present(int arr[][4], int m, int n, int target) { // We need to specify the column size in C++ //
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++ ){

            if (arr[i][j] == target){
                cout << "Element is present" << endl;
            } 
        }
    }
}

void Row_wise_sum (int arr[][4],int m, int n) {
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++ ){

            sum += arr[i][j];
        }

        cout << sum << endl;
    }    
}

void Row_with_max_sum (int arr[][4], int m, int n){
    int max_sum = INT32_MIN;
    int k;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++ ){

            sum += arr[i][j];
        }
        if(sum > max_sum){
            max_sum = sum;
            k = i;
        }
    }
    cout << "Row with max sum : " << k << " With sum : " << max_sum << endl;    
}

void Print_like_A_Wave (int arr[][4], int m, int n){
    vector<int> ans;

    for(int i = 0; i < m; i++) {
        if(i&1) { // for odd rows //
            for(int j = n; j != 0; j--) {
                ans.push_back(arr[i][j]);
            }
        }
        else {
            for(int j = 0; j < n; j++ ) {
                ans.push_back(arr[i][j]);
            }
        }
    
        // Now print the vector // 
    }
}

// For spiral print check leetcode 54 //

int main() {

    // Create 2-D array //
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,1,2,3}; // row wise input //
    // int arr_2[3][2] = {{1,2}, {2,3}, {3,4}}; // To put specific values at specific places //
    
    // Input //
    cout << "Enter the elements" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];

        }
    }

    Is_present(arr, 3, 4, 5);

    Row_wise_sum(arr , 3, 4);

    Row_with_max_sum(arr, 3, 4);

    // Print //
    cout << "The output matrix is :" << endl;
    for (int i = 0; i < 3; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";

        }
    }
}