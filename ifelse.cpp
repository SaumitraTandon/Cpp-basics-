#include<iostream>
using namespace std;
/*
int main() {
    int n; // block created of int n
    cin>>n; // waits for the input of n before printing hello world
    //cout<< "hello" << endl;
    
    if (n > 0) {
        cout<< " A is +ve" << endl;
    }
    else {
        cout<< " A is -ve" << endl;
    }
}
*/

//----------------------------------------------------------------------------------------------------------------------//
/*

int main() {
    
    int a, b;
    cin >>a >>b; // first input a then input b (no need to worry abt spaces)
    cout<< "Value of a and b is "<< a << " " << b << endl;
    // a = cin.get(); // // It gives the ascii value of 'a' 
}

*/

//------------------------------------------------------------------------------------------------------------------------//

int main() {

    int a, b;
    cout << "enter the value of A " << endl;
    cin >> a;
    cout << "enter the value of B " << endl;
    cin >> b;

    if (a>b) {
        cout << "A is greater than B " << endl;
    } 

    else if (a == b) {
        cout << " A and B are Equal" << endl;
    }   

    else {
        cout << "B is greater than A " << endl;
    }
}