#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    char arr[1000];
    stack<char> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
        {
            st.push(arr[i]);
        }
        else
        {
           if(st.empty()){
            cout<<"incorrect paranthesis";
            return 0;
           }
           char top =st.top();
           st.pop();
           if(arr[i]==']' && top != '[' || arr[i]=='}' && top != '{' || arr[i]==')' && top != '(' ){
            cout<<"wrong paranthesis. bro :) ";
            return 0;
           }
        }
    }
    bool check = st.empty();
    if(check){
        cout <<"valid" << endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    
}