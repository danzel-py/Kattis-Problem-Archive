#include <stack>
#include <iostream>
using namespace std;

// tags: stack string

// void printLeft(stack<char> st){
//     if(st.empty()) return;
//     char x = st.top();
//     st.pop();
//     printLeft(st);
//     cout<<x;
// }

int main(){
    string st;
    cin>>st;
    int len = st.length();
    string left;
    stack<char> right;
    for (int i = 0; i < len; i++)
    {
        if(st[i] == 'R'){
            left.push_back(right.top());
            right.pop();
        }else if (st[i] == 'L')
        {
            right.push(left.back());
            left.pop_back();
        }else if(st[i] == 'B'){
            left.pop_back();
        }else{
            left.push_back(st[i]);
        }
    }
    cout<<left;
    while (!right.empty())
    {
        cout<<right.top();
        right.pop();
    }
    
    
    return 0;
}