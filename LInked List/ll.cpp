#include<bits/stdc++.h>
#include<string>
using namespace std;
///linked list
class node{
public:
    int data;
    node* next;
    node(int val)
        {
            data=val;
            next=NULL;
        }
};
void insert_at_tail(node* &head,int val)///adding in linked list
{
   node* n= new node(val);///new node
   if(head==NULL)
   {
       head=n;
       return;
   }
   node* temp=head;
   while(temp->next!=NULL)
   {
      temp=temp->next;/// Tri versing through the list
   }
   temp->next=n;///for the last node;

}
void display(node* head){
           node* temp=head;
           while(temp!=NULL)
           {
               cout<<temp->data<<" ";
               temp=temp->next;
           }
}
int main()
{
   node* head=NULL;
   for(int i=0;i<5;i++)
   {
       int n;
       cin>>n;
       insert_at_tail(head,n);
   }
   display(head);

}

