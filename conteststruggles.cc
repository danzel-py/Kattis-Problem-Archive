#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total,done;
    cin>>total>>done;
    double remaining = total-done;
    double avgall, avgdone;
    cin>>avgall>>avgdone;

    double avgrem = (avgall*total - avgdone*done)/remaining;
    avgrem>100?cout<<"impossible":cout<<fixed<<setprecision(6)<<avgrem;

    /*

    avg all = avg rem *rem + avgdone *done 
            -------------------------------
                        all

    ( avg all * all - avg done * done  )/ rem= avg rem

    */
    
    return 0;
}