#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num;
    int sum = 20;
    string result;
    bool nothing = true;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        sum+=num;
        if(nothing){
            if(sum>99){
                result = "Touchdown";
                nothing = false;
            }
            else if (sum<1)
            {
                result = "Safety";
                nothing = false;
            }
            

        }
    }
    if(nothing){
        result = "Nothing";
    }
    cout<<result;
    
    return 0;
}