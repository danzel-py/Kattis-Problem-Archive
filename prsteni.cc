#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first;
    cin>>first;
    int th;
    for (int i = 0; i < n-1; i++)
    {
        cin>>th;
        int a = min(first,th);
        int biggestdivider = 0;
        for (int j = 1; j < a+1; j++)
        {
            if(first%j==0 &&th%j==0){
                biggestdivider = j;
            }
        }
        cout<<first/biggestdivider<<'/'<<th/biggestdivider<<'\n';
        
    }
    
    return 0;
}