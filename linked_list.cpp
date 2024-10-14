#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node * next;

    // constructor //
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor //
    ~Node() {
        int value = this -> data;

        // memory free //
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }

        cout << "memory is free for node with data : "<< value << endl;
    }
};

void insert_at_head(Node*&head, int d) {

    // new node created //
    Node*temp = new Node(d);
    temp -> next =  head;
    head = temp;
}
void insert_at_tail(Node *& tail, int d) {
    Node*temp = new Node(d);
    tail -> next = temp;
    tail = temp ;
}

void insert_at_position (Node*& head, Node*& tail, int position, int d) {

    Node* temp = head;

    if (position==1) {
        insert_at_head(head, d);
        return;
    } 
    int cnt = 1;

    while (cnt < position - 1 ) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next = NULL) {
        insert_at_tail(tail, d);
    }
    // Creating a new node //
    Node* node_to_insert = new Node(d);
    node_to_insert -> next = temp -> next;
    temp -> next = node_to_insert;
}

void print_ll(Node* &head) {
    Node*temp = head;

    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void delete_node (int position, Node*& head) {

    if (position == 1) {
        Node*temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else {
        // delelting any middle node or last node //
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }


}

int main() {

    Node * node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed ot node //
    Node* head = node1;
    Node* tail = node1;
    print_ll(head);

    insert_at_head(head, 12);
    insert_at_head(head, 15);
    insert_at_tail(tail, 25);

    insert_at_position(head,tail, 1, 22);
    print_ll(head);

    delete_node(4, head);
    print_ll(head);

    return 0;
}