#include<iostream>
using namespace std;

int getLenght(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

void reverse_string (char name[], int size) {
    int end = size - 1;

    for (int start = 0; start < end; start++) {
        swap(name[start], name[end]);
        end--;
    }

    cout << name;
}

void check_palindrome(char name_1[], int size) {
    int end = size - 1;
    char name1[20];
    for (int i = 0; name_1[i] != '\0'; i++) {
        name1[i] = name_1[i];
    }

    for (int start = 0; start < end; start++) {
        swap(name_1[start], name_1[end]);
        end--;
    }

    if (name_1  == name1) {
        cout << "The number is a palindrome" << endl;
    }
    else {
        cout << "The number is not a palindrome" << endl;
    }
}

int main() {

    char name[20];

    cout << "Enter your name " << endl;
    cin >> name; // cin only takes i/p unitl it sees a space, tab or a newline //

    cout << "Your name is " ;
    cout << name << endl;

    cout << getLenght(name) << endl;
    int size = getLenght(name);

    reverse_string(name,size);
    cout << endl;
    check_palindrome(name, size);

    return 0; 
}