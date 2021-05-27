#include <iostream>
#include <map>
using namespace std;

int main(){
    int time, sum=0,c=0;
    string status;
    char letter;
    map <char,int> mapz;
    while (true)
    {
        cin>>time;
        if(time==-1){
            break;
        }
        cin>>letter>>status;
        if(mapz[letter]==-1){
            // do nothing
        }else
        {
            if(status == "wrong"){
                mapz[letter]++;
            }
            else{
                sum+=mapz[letter]*20+time;
                mapz[letter] = -1;
                c++;

            }
        }
        
    }
    cout<<c<<' '<<sum;

    
    return 0;
}