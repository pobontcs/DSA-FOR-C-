#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;

void reverse_sentence(string s){

        stack <string> st;

        for(int i=0;i<s.length();i++)
        {
            string word="";
            while(s[i]!=' ' and i<s.length())
            {
                word+=s[i];
                i++;
            }
            st.push(word);
        }

        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
cout<<endl;

}


int main()
{
   string s="A B C D";
   reverse_sentence(s);
   cout<<s<<endl;
return 0;
}
