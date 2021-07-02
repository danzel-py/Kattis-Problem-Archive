#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int main(){
    int n;
    while (true)
    {
        cin>>n;
        cin.ignore(255,'\n');
        if(n == 0){
            break;
        }
        string s;
        pair<string,int> arr[n];
        string raw[n];
        for (int i = 0; i < n; i++)
        {
            getline(cin,s);
            raw[i] = s;
            if(s.length() == 9){
                s = "0"+s;
            }
            if(s[0] == '1' && s[1] == '2'){
                s[0] = '0';
                s[1] = '0';
            }
            string dpn = s.substr(0,5);
            string blkg = s.substr(6,1);
            s = blkg+dpn;
            arr[i] = make_pair(s,i);
        }

        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            cout<<raw[arr[i].second]<<"\n";
        }
        cout<<'\n';
        
        
    }
    
    return 0;
}