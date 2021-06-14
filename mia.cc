#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    int score1,score2;
    while (true)
    {
        cin>>a>>b>>c>>d;
        if(a == 0){
            break;
        }
        int ra = max(a,b);
        b = min(a,b);
        a = ra;
        ra = max(c,d);
        d = min(c,d);
        c = ra;

        if(a == b){
            score1 = a*100;
        }
        else if (a == 2 && b == 1)
        {
            score1 = 1000;
        }else{
            score1 = a*10+b;
        }

        if(c == d){
            score2 = c*100;
        }
        else if (c == 2 && d == 1)
        {
            score2 = 1000;
        }else{
            score2 = c*10+d;
        }

        if(score1>score2){
            cout<<"Player 1 wins.\n";
        }else if (score1<score2)
        {
            cout<<"Player 2 wins.\n";
        }
        else{
            cout<<"Tie.\n";
        }
        
        
        
    }
    
    return 0;
}