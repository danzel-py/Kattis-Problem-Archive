#include <iostream>
#include <vector>
using namespace std;

vector<string> cmd;



bool runrobot(int desx, int desy){
    int head = 0;
    int x = 0, y = 0;
    for(auto &B: cmd){
        if(B == "Forward"){
            if(head == 0){
                y++;
            }else if (head == 1)
            {
                x++;
            }else if (head == 2)
            {
                y--;
            }else if (head == 3)
            {
                x--;
            }
        }else if (B == "Left")
        {
            head--;
            if(head <0){
                head = 3;
            }
        }else if (B == "Right")
        {
            head++;
            if(head >3){
                head = 0;
            }
        }
        
        
    }
    if(x == desx && y == desy){
        return true;
    }
    else{
        return false;
    }
}

vector<string> arcm = {"Forward","Left","Right","Forward","Left","Right"};

int main(){
    int dx,dy;
    cin>>dx>>dy;
    int cm;
    cin>>cm;
    string st;
    for (int i = 0; i < cm; i++)
    {
        cin>>st;
        cmd.push_back(st);
    }

    for (int i = 0; i < cm; i++)
    {
        int pos = 0;
        for (int j = 0; j < 6; j++)
        {
            if(arcm[j] == cmd[i]){
                pos = j;
                break;
            }
        }
        cmd[i] = arcm[pos+1];
        if(runrobot(dx,dy)){
            cout<<i+1<<' '<<arcm[pos+1];
            break;
        }
        cmd[i] = arcm[pos+2];
        if(runrobot(dx,dy)){
            cout<<i+1<<' '<<arcm[pos+2];
            break;
        }
        cmd[i] = arcm[pos+3];
        
    }
    
    
    
    return 0;
}