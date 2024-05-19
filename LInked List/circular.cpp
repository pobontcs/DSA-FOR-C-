#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

class node{
    public:

    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;;
    }
};

void insert_head(node*&head,int val)
{
    node* n=new node(val);
    node*temp=head;

        if(head==NULL)
        {
            n->next=n;
            head=n;
            return;
        }

    while(temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
    
}


void insert_tail(node*&head,int val)
{
    
    node* n= new node(val);
    node* temp=head;
        if(head==NULL)
        {
            insert_head(head,val);
            return;
        }
    while(temp->next!=head)
    {
            temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}

void display(node*head)
{
    node* temp=head;

    do{

        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp->next!=head);

    cout<<endl;

}


int main()
{
    node* x=NULL;

    insert_tail(x,1);
    insert_tail(x,2);
    insert_tail(x,3);
    insert_tail(x,4);
    insert_tail(x,4);
    display(x);

return 0;
}