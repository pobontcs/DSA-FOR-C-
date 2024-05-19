#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next, *prev;
    node(int val)
    {
        data = val;
        next = NULL
        prev = NULL;
    }
};

void insert_head(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head->prev = n;

    head = n;
}

void insert_tail(node *&head, int val)
{
    if (head == NULL)
    {
        insert_head(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "--";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *x = NULL;

    insert_tail(x, 5);
    insert_tail(x, 6);
    insert_tail(x, 7);
    insert_tail(x, 8);
    display(x);

    return 0;
}
