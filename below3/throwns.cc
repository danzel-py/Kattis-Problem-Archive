#include <iostream>
#include <stack>
using namespace std;

stack<int> wow;

int main(){
    int cil,ip;
    wow.push(0);
    cin>>cil>>ip;
    string st;
    int aw,tp;
    for (int i = 0; i < ip; i++)
    {
        cin>>st;
        if(st == "undo"){
            cin>>aw;
            for (int j = 0; j < aw; j++)
            {
                wow.pop();
            }
        }else{
            aw = stoi(st);
            tp = wow.top();
            if(tp + aw < 0){
                aw+=cil*10000;
            }
            wow.push((tp + aw)%cil);
        }
    }
    cout<<wow.top();
    
    return 0;
}