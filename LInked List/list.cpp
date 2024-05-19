#include<bits/stdc++.h>
#include<iostream>
#include "alg.h"
using namespace std;


 struct node{
         
        
        int data; node* next;
        node(int val){
            data=val;
            next=NULL;
        }
};







void pus_bck(node * &head, int val)
{
   node* n= new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
   node* temp=head;
   while(temp->next!=NULL) temp=temp->next;

   temp->next=n;
}

void display(node *head){

        node* temp=head;
        while(temp!=NULL)
        {
                cout<<temp->data<<" ";
                temp=temp->next;
        }
            cout<<endl;
}
                                                                                                                     
int main()
{
   node* head=NULL;
     pus_bck(head,1);
     pus_bck(head,2);
     pus_bck(head,3);
     pus_bck(head,4);
     display(head);

return 0;
}