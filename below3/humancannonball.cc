#include <queue>
#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

vector<double> vis;
vector<double> cx;
vector<double> cy;

double dist(double a, double d, double b, double c)
{
    return sqrt((a - b) * (a - b) + (d - c) * (d - c));
}


// void bfs(){
//     queue<int> qx;
//     queue<int> qy;
//     qx.push(0);
//     qy.push(0);

//     while (!qx.empty())
//     {
//         int nowx = qx.front();
//         int nowy = qy.front();
//         qx.pop();
//         qy.pop();
        
//     }
    
// }

int main()
{
    double ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;
    int n;
    cin >> n;
    vis.resize(n + 2);
    cx.resize(n + 2);
    cy.resize(n + 2);
    cx[0] = ax;
    cy[0] = ay;
    cx[n + 1] = bx;
    cy[n + 1] = by;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> cx[i] >> cy[i];
    }
    for (int i = 0; i < n + 2; i++)
    {
        vis[i] = dist(cx[0], cy[0], cx[i], cy[i]) / 5;
    }
    
    int nn = n * 2;
    while (nn--)
    {
        for (int i = 1; i < n + 2; i++)
        {
            for (int j = 1; j < n + 2; j++)
            {
                if(i == j){
                    continue;
                }
                vis[j] = min(vis[j], abs((dist(cx[i], cy[i], cx[j], cy[j]) - 50) / 5) + 2 + vis[i]);
            }
        }
    }
    cout<<fixed<<setprecision(4)<<vis[n+1];


    

    return 0;
}