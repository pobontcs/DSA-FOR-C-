#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define n 100
using namespace std;

class Stack{
    int *arr;
    int top;

    public:

    stack(){
            arr= new int[n];
            top=-1;
    }

    void push(int x){
        if(top==n-1) {
            cout<<"Stack overflow\n";return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1) {
            cout<<"Empty stack\n";
            return ;
        }

        top--;
    }

    void Top(){
         if(top==-1) {
            cout<<"Empty stack\n";
            return -1;
        } 

        return arr[top];
    }
    bool empty(){
        
        return top==-1;
    }

};78


int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.Top()<<endl;
 

return 0;
}