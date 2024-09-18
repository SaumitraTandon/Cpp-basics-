#include<iostream>
using namespace std;

int main() {

    int a, b;
    
    cout << "Enter the first number" << endl;
    cin >> a;

    cout << " Enter the second number " << endl;
    cin >> b;

    cout << " Enter the operation which you want to perform" << endl;
    char operation;
    cin >> operation;

    switch (operation){
    
    case '+' :
        cout << a + b << endl;
        break;

    case '-' :
        cout << a - b << endl;
        break;

    case '*' :
        cout << a * b << endl;
        break;

    case '%' :
        cout << a % b << endl;

    default:
        cout << "Error : Invalid Operation" << endl;
        break;
    }
}