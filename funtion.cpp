#include<iostream>
using namespace std;

/*

int power(int a, int b){

    int ans = 1;

    for (int i = 1; i <= b; i++) {
        ans = ans * a;
    }

    return ans;
}

int main() {

    int a, b;
    cin >> a;
    cin >> b;

    power(a,b);

    return 0;
}

*/

/*
int power() {
    int a, b;
    cin >> a;
    cin >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++) {
        ans = ans * a ;

    }

    return ans;
}

int main() {
    cout << power() << endl;
}

*/

int factorial (int n) {
    int prod = 1;
    for (n; n > 0; n = n -1) {
        prod = prod * n;
    }

    return prod;

}


int nCr (int n, int r) {
    int ans = factorial(n)/(factorial(r) * factorial(n-r));
    return ans;

}


int main() {
    cout << "Enter the value of N";
    int n, r;
    cin >> n;
    cout << "Enter the value of R";
    cin >> r;
    cout << " The value of "<< n;
    cout << "C";
    cout << r;
    cout << " is " ;
    cout << nCr(n, r) ;

}
