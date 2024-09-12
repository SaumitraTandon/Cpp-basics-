#include<iostream>
#include<array>

using namespace std;
/*

//---------------------------ARRAY--------------------------------//

int main() {

    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 4}; // This is static as is the upper one. Therefore we don't use it in programming. // 
    int size = a.size();

    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Element at 2nd Index : " << a.at(2) << endl; \
    cout << "Empty or Not : " << a.empty() << endl; // Returns 0 //
    cout << "First Element : " << a.front() << endl;
    cout << "Last Element is : " << a.back() << endl;

}

// All Time Complexity == O(1) //

*/

//---------------------------VECTOR---------------------------------//

/*
#include<vector>

int main() {

    vector<int> v;
    vector<int> a(5, 1); // initializes a vector of size 5 containing only 1 //
    vector<int> last(a); // Creates a new vector which includes the elements of a vector //
    for(int i : last ) {
        cout << i << " ";
    }
    cout << endl;    
    cout << "Size of Vector : " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size of Vector : " << v.capacity() << endl;
    v.push_back(5);
    cout << "Size of Vector : " << v.capacity() << endl;
    v.push_back(10);
    cout << "Size of Vector : " << v.capacity() << endl; // Gives outout as 4 instead of 3 //
    cout << "Size of Elements in the vector : " << v.size() << endl;
    cout << "First Element : " << v.front() << endl;
    cout << "Last Element is : " << v.back() << endl;
    v.pop_back(); // pops the last element //
    for(int i : v ) {
        cout << i << " ";
    }
    cout << endl;
    v.clear();
    cout << "Size of Vector : " << v.size() << endl;  // Gives 0 //

}

*/

//-----------------------------------------DEQUE----------------------------------------------------------------//

/*
#include<deque>

int main() {

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i : d) {
        cout << i<< " ";
    }
    cout << endl;
    // Gives 2 1 //

    d.pop_back();

    for(int i : d) {
        cout << i<< " ";
    }
    cout << endl; // Gives 2 //

    d.push_front(3);

    d.pop_front();

    for(int i : d) {
        cout << i<< " ";
    }
    cout << endl;  // 2 gets popped //

    d.push_front(3);
    
    cout << "The element at index 1 is : " << d.at(1) << endl;  
    
    cout << "Front : " << d.front() << endl;
    cout << "Back : " << d.back() <<endl;

    cout << "Empty or not : " << d.empty() << endl;

    d.push_front(3);

    cout << "Before Erasing : " << endl;
    for(int i : d) {
        cout << i<< " ";
    }
    cout << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After Erasing : " << endl;
    for(int i : d) {
        cout << i<< " ";
    }
}

*/

//------------------------------------------------LIST-----------------------------------------------//

/*

#include<list>

int main() {
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i : l) {
        cout << i<< " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase : "; 
    for(int i : l) {
        cout << i<< " ";
    }
    cout << endl;
}

*/

//----------------------------------STACK---------------------------------------------------------//

/*

#include<stack>

int main() {
    stack<string> s;

    s.push("Saumitra");
    s.push("Tandon");

    cout << "The top element is : " << s.top() << endl;
    cout << "Size of stack : " << s.size() << endl;

    s.pop();

    cout << "Size of stack : " << s.size() << endl;

}

*/

//-----------------------------QUEUE--------------------------------------------------------------//

/*
#include<queue>

int main() {

    queue<string> q;

    q.push("Saumitra");
    q.push("Tandon");

    cout << "First Element is : " << q.front() << endl;

    q.pop();

    cout << "After popping First Element is : " << q.front() << endl;

}

*/

//-----------------------------------------Priority Queue---------------------------------------------------//

// First element will be greatest //

/* 

#include<queue>

int main() {
    // max heap//
    priority_queue<int> maxi; // greatest element will be fetched //

    // min heap//
    priority_queue<int, vector<int> , greater<int> > mini; 

    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(0);

    int n = maxi.size();

    for(int i = 0; i < n; i++) {
        cout << maxi.top()<< " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(1);
    mini.push(3);
    mini.push(5);
    mini.push(0);

    int m = mini.size();

    for(int i = 0; i < m; i++) {
        cout << mini.top()<< " ";
        mini.pop();
    }
    cout << endl; 

    cout << "is the queue now empty : " << mini.empty() << endl;

}

*/

//--------------------------------------SET-------------------------------------------------------------//

// Can only store discrete values //
// No modifiation of Data allowed //

/*
#include<set>

int main() {

    set<int> s;
    s.insert(0);
    s.insert(0);
    s.insert(2);    
    s.insert(1);    
    s.insert(5);    
    
    for(int i : s) {
        cout << i<< " ";
    }
    cout << endl; // Gives output in sorted order // // 0 1 2 5//

    s.erase(s.begin()); // 0 gets popped //

    for(int i : s) {
        cout << i<< " ";
    }
    cout << endl;
    
    cout << "Check if 5 is present or not : " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);

    for(auto it = itr; it != s.end();it++ ) { // To print elements after 5
        cout << *it << " ";
    }
    cout << endl;
}

*/

//----------------------------------------MAP----------------------------------------------------------------------------------------------//

// Uses key and value method //

/*
#include<map>

int main() {
    map<int, string> m;

    m[0] = "Saumitra";
    m[1] = "loves";
    m[2] = "goth";
    m[6] = "Girls";
    m[4] = "and lvl 10 GYATTs";

    m.insert({5,"and not lady bois"});

    for(auto i:m) {
        cout << i.first << endl; 
    }
    // Gives the keys in an ascending order //
    for(auto i:m) {
        cout << i.second << endl;
    }
    cout << endl;
    // Gives out the values //

    cout << "Find 5 : " << m.count(5)<< endl;

    m.erase(5);

    cout << "Find 5 : " << m.count(5)<< endl;

    auto it = m.find(4);

    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;
    }

}

*/

//---------------------------------------ALGORITHMS-------------------------------------------------------------------//

#include<algorithm>
#include<vector>

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(21);
    v.push_back(10);
 
    cout << binary_search(v.begin(),v.end(), 6 ) << endl; // gives 0 as 6 is not present //

    cout << "lower_bound : " << lower_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    cout << "upper_bound : " << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;

//------------------------------------------------------------------------------------------------------------//

    int a = 5;
    int b = 3;

    cout << "Max of 3 and 5 is : " << max(a,b) << endl; // similar for min //
    
    swap(a, b);
    cout << a << endl;\

    string abcd  = "abcd" ;
    reverse(abcd.begin(), abcd.end());
    cout << "String : " << abcd << endl;

    rotate(v.begin(), v.begin()+1 ,v.end()); // v.begin()+1 --> number of elements we want to rotate // 
    cout << " After rotate : " << endl;
    for(int i:v) {
        cout << i << " ";
    }
}