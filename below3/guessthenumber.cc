#include <iostream>
using namespace std;

int main(){
    int low = 1;
    int high = 1000;
    string res;
    bool hatsukoi = true;
    for (int i = 0; i < 10; i++)
    {
        int guess =(low+high)/2;
        cout<<guess<<endl;
        cin>>res;
        if(res == "correct"){
            break;
        }else if (res == "lower")
        {
            high = guess-1;
        }else if (res == "higher")
        {
            low = guess+1;
        }
    }
    
    
    return 0;
}