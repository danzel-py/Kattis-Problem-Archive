#include <iostream>
using namespace std;

int main(){
    int s,t,n;
    cin>>s>>t>>n;

    int walks[n+1];
    int wt;
    for (int i = 0; i < n+1; i++){
        cin>>wt;
        walks[i]=wt;
    }

    int buses[n];
    int bt;
    for (int i = 0; i<n; i++){
        cin>>bt;
        buses[i]=bt;
    }

    int intervals[n];
    int it;
    for (int i = 0; i < n; i++){
        cin>>it;
        intervals[i] = it;
    }

    int buscount = 0;
    bool started = false;
    bool walked = false;
    int time = 0;
    string can = "no";
    while(time<=t)
    {
        if(time == s){// starts journey
            started = true;
        }

        if(started == false){
            time++;
        }

        if(started){
            if(walked == false){
                time += walks[buscount]; // walks
                walked = true;
            }
            else{
                time++;
            }
            
            if(time>t){
                break;
            }

            if(buscount==n){
                can = "yes";
                break;
            }

            if(time%intervals[buscount]==0){
                // if bus is ready
                time+=buses[buscount];
                buscount++;
                walked = false;
            }
        }

        
    }
    cout<<can;
    
    
    
    return 0;
}