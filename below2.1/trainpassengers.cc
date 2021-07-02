#include <iostream>
using namespace std;

int main(){
    int capacity, n;
    cin>>capacity>>n;
    int leave, enter, stay;
    int in = 0;
    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        cin>>leave>>enter>>stay;
        if(leave>0){
            if (in-leave<0)
            {
                possible = false;
            }
            else{
                in -= leave;
            }
        }
        if (enter>0)
        {
            if(enter+in > capacity){
                possible = false;
            }
            else{
                in+= enter;
            }
        }
        if (stay>0)
        {
            if(in<capacity){
                possible = false;
            }
        }
        
        

    }
    if(in!=0){
        possible = false;
    }
    possible?cout<<"possible":cout<<"impossible";
    
    return 0;
}