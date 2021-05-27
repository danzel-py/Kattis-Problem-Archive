#include <iostream>
using namespace std;

int main(){
    int n,carrot;
    scanf("%d %d", &n, &carrot);
    for (int i = 0; i<n; i++){
        string wow;
        cin>>wow;
    }
    cout<<carrot<<endl;
    return 0;
}

/*
to avoid input errors

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        printf("%d", t);
    } else {
        printf("Failed to read integer.\n");
    }
    return 0;
}
*/