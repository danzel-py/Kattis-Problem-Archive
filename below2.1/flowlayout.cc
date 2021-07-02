#include <iostream>
using namespace std;

int main(){
    int maxw;
    while (true)
    {
        cin>>maxw;
        if(maxw == 0){
            break;
        }
        int w,h;
        int totalh = 0;
        int globalw = 0;
        int localh = 0;
        int localw = 0;
        while (true)
        {
            cin>>w>>h;
            if(w == -1){
                break;
            }
            if(localw+w>maxw){
                totalh += localh;
                globalw = max(globalw, localw);
                localw = 0;
                localh = 0;
            }
            localw += w;
            localh = max(localh, h);

        }

                totalh += localh;
                globalw = max(globalw, localw);
        cout<<globalw<<" x "<<totalh<<'\n';

        
    }
    
    return 0;
}