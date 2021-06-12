#include <iostream>
#include <unordered_set>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    string first, last, course, full;
    map<string, unordered_set <string> > wow;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin>>first>>last>>course;
        full = first+last;
        wow[course].insert(full);
    }

    for(auto const [key,setzz] : wow){
        cout<<key<<' '<<setzz.size()<<'\n';
    }
    
    return 0;
}