#include <iostream>
using namespace std;
// WTF ? failed on first test
int main(){
    int x, n, p, used;
    used = 0;
    cin >> x;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> p;
        used += p;
    }

    int lim = x*(n+1)-used;
    cout<< lim <<endl;

    return 0;
}