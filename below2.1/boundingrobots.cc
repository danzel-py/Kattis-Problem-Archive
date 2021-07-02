#include <iostream>
using namespace std;

int main(){
    int w,l,n,steps;
    char dir;
    while (true)
    {
        cin>>w>>l;
        if(w==0 && l==0){
            break;
        }
        cin>>n;
        int x1 = 0;
        int y1 = 0;
        int x2 = 0;
        int y2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>dir>>steps;
            switch (dir)
            {
            case 'u':
                y1+=steps;
                y2+=steps;
                if(y1>=l){
                    y1 = l-1;
                }
                break;
            case 'd':
                y1-=steps;
                y2-=steps;
                if(y1<0){
                    y1 = 0;
                }
                break;
            case 'r':
                x1+=steps;
                x2+=steps;
                if(x1>=w){
                    x1 = w-1;
                }
                break;
            case 'l':
                x1-=steps;
                x2-=steps;
                if(x1<0){
                    x1 = 0;
                }
                break;
            
            default:
                break;
            }
        }
        cout<<"Robot thinks "<<x2<<' '<<y2<<'\n';
        cout<<"Actually at "<<x1<<' '<<y1<<'\n';
        
    }
    
    return 0;
}