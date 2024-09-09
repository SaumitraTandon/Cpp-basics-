#include <iostream>
using namespace std;
#include <cmath>

/*
int main() {
    int n;
    cin >> n;
    int ans = 0; 
    int place = 1; 

    while (n != 0) {
        int bit = n & 1; 
        ans = (bit * place) + ans;
        place *= 10; 
        n = n >> 1;
    }

    cout << "The answer is " << ans << endl;
}

*/
// ---------------------------------------------------------------------------------------------------------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;

    while (n != 0) {
            int bit = n % 10;
            if (bit == 1) {
                sum = pow(2,i) + sum;

            }
            i++;
            n = n / 10;
    }
    cout << sum;
}