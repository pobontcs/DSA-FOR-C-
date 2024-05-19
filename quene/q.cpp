#include<iostream>
#define n 5
using namespace std;


class queue{
   
    int* arr;
    int front;
    int back;
       public:  

        queue(){
            arr= new int[n];
            front=-1;
            back=-1;
        }

    void end_queue(int x);






    
    void dequeue();
    int peek();
    bool empty();
    void print();

};
        void queue::end_queue(int x){

            if(back==n-1){
                cout<<"Method unavailable\n";
                return;    
            }
            back++;
            arr[back]=x;
            if(front=-1){
                front++;
            }
        }
        void queue::dequeue(){
            if(front==-1 || front>back){
                    cout<<"No elements Available\n";
                    return ;
            }
            front++;
        }
        int queue::peek(){
            if(front==-1|| front>back){
                cout<<"error argument\n";
                return -1;
            }
            return arr[front];
        }
        bool queue::empty(){
                    if(front==-1 && front>back){
                            return true;
                    }
            return false;
        }

    void queue::print(){



            for(int i=front;i<=back;i++)
            cout<<arr[i]<<" ";

            cout<<endl; 

                

    }

int_fast32_t main(){

            queue q;
            q.end_queue(1);
            q.end_queue(2);
            q.end_queue(3);
            q.end_queue(4);
            q.end_queue(5);
            q.print();

}