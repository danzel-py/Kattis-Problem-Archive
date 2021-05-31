#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n];
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    char ch;
    char mem1;
    char mem2;
    while(cin>>ch){
        if(int(ch) >= int('A') && int(ch)<= int('Z')){
            st.push(arr[int(ch)-int('A')]);
        }
        else{
            if(ch == '*'){
                mem1 = st.top();
                st.pop();
                mem2 = st.top();
                st.pop();
                if(mem1 == mem2 && mem1=='T'){
                    st.push('T');
                }
                else{
                    st.push('F');
                }
            }
            else if (ch == '+')
            {
                mem1 = st.top();
                st.pop();
                mem2 = st.top();
                st.pop();
                if(mem1 == 'T' || mem2 == 'T'){
                    st.push('T');
                }
                else{
                    st.push('F');
                }
            }
            else{
                mem1 = st.top();
                st.pop();
                if(mem1 == 'F'){
                    st.push('T');
                }else{
                    st.push('F');
                }
            }
            
        }
    }
    cout<<st.top();

    
    return 0;
}