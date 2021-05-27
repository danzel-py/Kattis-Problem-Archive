#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string u;
    bool fish = false;
    for (int i = 0; i < n; i++)
    {
        cin>>u;
        if(u[0]=='m'){

        }else{
            if(stoi(u)!=i+1){
                fish = true;
            }
        }
    }
    if(fish){
        cout<<"something is fishy";
    }else{
        cout<<"makes sense";
    }
    
    return 0;
}