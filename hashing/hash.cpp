//searching an element by backend indices

#include<bits/stdc++.h>
#include<iostream>
#define M 1000
using namespace std;

bool has[M+1][2];


bool search(int x){
        if(x>=0){
            if (has[x][0]==1){
                return true;
            }
            else{
                return false;
            }
        }
        x=abs(x);
        if(has[x][1]==1) return true;

        return false;
}
 void insert(int a[],int n){
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0) has[a[i]][0]=1;
            else has[abs(a[i])][1]=1;
        }
 }

int main()
{
    int a[] = { -1, 9, -5, -8, -5, -2 };
    int n = sizeof(a)/sizeof(a[0]);
    insert(a, n);
    cout<<search(-5)<<endl<<search(2)<<endl;
        
        return 0;
}
