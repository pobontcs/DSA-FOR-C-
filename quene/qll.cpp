#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class queue {
public:
    node* front;
    node* back;

    queue() : front(NULL), back(NULL) {}

    void push(int val) {
        node* n = new node(val);
        if (front == NULL) {
            front = n;
            back = n;
        } else {
            back->next = n;
            back = n;
        }
    }

    void pop() {
        if (front == NULL) {
            cout << "Empty queue\n";
            return;
        }

        node* todelete = front;
        front = front->next;
        delete todelete;
    }

    int peek() {
        if (front == NULL) {
            cout << "Empty Queue\n";
            return -1;
        }
        return front->data;
    }

    bool empty() {
        return front == NULL;
    }
};

int main() {
    // Example 1
    queue q1;

    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    cout << q1.peek() << endl;
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    cout<<q1.empty()<<endl;

    // Example 2
    queue q2;

    q2.push(10);
    q2.push(20);
    q2.push(30);
    q2.push(40);

    cout << q2.peek() << endl;
    cout << q2.empty() << endl;

    return 0;
}
