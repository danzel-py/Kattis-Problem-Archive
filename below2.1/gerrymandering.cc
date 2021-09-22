#include <map>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int queries, cities;
    cin>>queries>>cities;
    map<int,int> getA;
    map<int,int> getB;
    int totalVotes = 0;
    int cn,a,b;
    for (int i = 0; i < queries; i++)
    {
        cin>>cn>>a>>b;
        totalVotes += a+b;
        getA[cn] += a;
        getB[cn] += b;
    }
    char winner;
    int wastedA = 0;
    int wastedB = 0;
    int totalWastedA = 0;
    int totalWastedB = 0;
    for (int i = 1; i < cities+1; i++)
    {
        if(getA[i] > getB[i]){
            winner = 'A';
            wastedA = getA[i] - ((getA[i] + getB[i])/2) - 1;
            wastedB = getB[i];
        }
        else{
            winner = 'B';
            wastedA = getA[i];
            wastedB = getB[i] - ((getA[i] + getB[i])/2) - 1;
        }
        totalWastedA += wastedA;
        totalWastedB += wastedB;
        cout<<winner<<' '<<wastedA<<' '<<wastedB<<'\n';
    }
    double ee = double(abs(totalWastedA - totalWastedB))/ double(totalVotes);
    cout<<fixed<<setprecision(6)<<ee;

    
    
    return 0;
}