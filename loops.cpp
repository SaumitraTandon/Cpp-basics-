#include<iostream>
using namespace std;

/*
int main() {

    int n;
    int sum = 0; 
    cout << " enter the value of N" << endl;
    cin >> n;
    int i = 1;
    
    while( n>i) {
        cout << i << " " ;
        sum = sum + i;
        i += 1;
    }
    cout << "" << endl;
    cout << sum << endl;
}
*/

//---------------------------------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int n ;
    int i = 2;
    int sum = 0;
    cin >> n;
    while (n>i) {
        int remainder = n % i;
        if (remainder == 0) {
            sum = sum + 1;
        } 
        else {
            sum = sum;
        }
        i = i + 1 ;
    }

    if (sum>0){
        cout<< "the number is not prime" << endl;
    }
    else {
        cout << "the number is prime" << endl;
    }
}

*/

// ---------------------------------------------------------------------------------------------------//

/*
int main() {

    int i = 1;
    int n;
    cin >> n ;
    while ( i < n + 1 ){
        int j = 1;
        while ( j < n + 1) {
            cout << "*" ;
            j = j+ 1; 
        }
        cout << endl;
        i = i + 1;
    } 
}

*/

//--------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i < n + 1) {
        int j = 1;
        int k = 1;
        while (j < n + 1){
            cout << k;
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    } 
}

*/

//-----------------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int i = 1;
    int n;
    cin >> n;
    while (i < n) {
        int j = 1;
        while ( i >= j) {
            cout << "*" ;
            j = j + 1;
        }
        cout << endl;
        i =  i + 1;
    }
}

*/

//----------------------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int i = 1;
    int n;
    cin >> n;

    while (i<n) {
        int j = 1;
        while (j<=i) {
            cout << i - j + 1;
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }
}

*/

//------------------------------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int i = 1;
    int n;
    char m = 65;
    cin >> n;
    while (i<=n) {
        int j = 1;
        while (j<=n) {
            cout << m;
            j = j + 1;

        }
        i = i + 1;
        m = m + 1;
        cout << endl;
    }

}

*/

//------------------------------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int i = 1;
    int n;
    cin >> n;

    while (i<=n) {
        
        int space = n - i;
        while (space) {
            cout << " ";
            space = space - i;

        }

        int col = 1;
        while (col<=i) {
            cout << "*" ;
            col = col + 1;
        }

        cout << endl;
        i = i + 1;
    }
}

*/

//-------------------------------------------------------------------------------------------------------------------------------------//

/*
int main() {
    int i = 1;
    int n;
    cin >> n;
    while (i <= n) {
        int space  = n - i;
        while (space) {
           cout << " " ;
           space = space - 1;
        }

        int j = 1;
        while (j <= i ) {
            cout << j;
            j = j + 1;
        }

        int start = i - 1;
        while (start) {
            cout << start ;
            start = start - 1;
        }  

        cout << endl;
        i = i + 1;

    }
}

*/

//--------------------------------------------------------------------------------------------------------------------------------------------------------//

int main() {
    int n;
    cin >> n;
    int i = 0;

    while (i<=n) {
        int sum = n - i ;
        int j = 1;
        
        // First Triangle //
        while (j<=sum) {
            cout << j;
            j = j + 1;
        }

        // Second Triangle //

        int k = 0;
        while (k < i) {
            cout << "*" ;
            k = k + 1;
        }

        // Third Triangle //

        int l = 0;
        while (l < i) {
            cout << "*" ;
            l = l + 1;
        }
        int m = n - i ;
        while (m) {
            cout << m;
            m = m - 1;
            
        }

        i = i + 1;
        cout << endl;

    }

}