#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int prefixevl(string s){

        stack<int>s1;

        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                s1.push(s[i]-'0');
            }
            else {
                    int op1=s1.top();
                    s1.pop();
                    int op2=s1.top();
                    s1.pop();
                    switch (s[i])
                    {
                    case '+':
                        s1.push(op1+op2);
                        break;
                    case '-':
                        s1.push(op1-op2);
                        break;
                    case '/':
                        s1.push(op1/op2);
                        break;
                    case '*':
                        s1.push(op1*op2);
                        break;
                    case '^':
                        s1.push(pow(op1,op2));

                    }

            }
        }
        return s1.top();

}

int main(){

        string s="99/2*3*34";

        cout<<prefixevl(s)<<endl;

}
