#include<bits/stdc++.h>
#include<algorithm>
#include<conio.h>
#include<iostream>
using namespace std;

class node
{
    public:
    node * next;
    int data;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void ansert(node*& head,int value)
{
    node*n=new node(value);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void delhd(node*&head)
{
    node*temp=head;
    head=head->next;
    delete temp;
}
void display(node * head)
{
    if(head==NULL)
    {
        cout<<"NULL";
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<endl;
}
void deletation(node *&head,int value)
{
    if(head==NULL)
        {
            return;
        }
        node*temp=head;
    while(temp->next->data!=value)
        {
            temp=temp->next;
        }
    node* dele=temp->next;

    temp->next=temp->next->next;
    delete dele;
}
node * reverse(node* &head)
{
    if((head==NULL) || (head->next==NULL)) 
                return head;

    node * n=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return n;
    
}
int main()
{
    node* head=NULL;
    ansert(head,1);
    ansert(head,2);
    ansert(head,6);
    ansert(head,7);
    ansert(head,9);
    display(head);
    display(head);
    deletation(head,2);
    display(head);
    delhd(head);
    display(head);
    node * tail=NULL;
    ansert(tail,5);
    ansert(tail,4);
    ansert(tail,3);
    ansert(tail,2);
    node* newhead=reverse(tail);
    display(newhead);


return 0;
}