#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int n;
    int cmd, val;
    while (cin >> n)
    {
        priority_queue<int> pq;
        vector<int> v;
        stack<int> vs;
        bool stackb = true, queueb = true, pqb = true;
        int stackpos = -1, queuepos = 0;
        bool cq = false;
        for (int i = 0; i < n; i++)
        {
            cin >> cmd >> val;
            if (cmd == 1)
            {
                v.push_back(val);
                vs.push(val);
                pq.push(val);
            }
            else
            {
                if (vs.empty())
                {
                    cq = true;
                }
                else
                {

                    if (stackb)
                    {
                        if(vs.top() == val){

                        vs.pop();
                        }
                        else{
                            stackb= false;
                        }
                    }
                    if (queueb)
                    {
                        if (val != v[queuepos])
                        {
                            queueb = false;
                        }
                        queuepos++;
                    }
                    if (pqb)
                    {
                        if (val != pq.top())
                        {
                            pqb = false;
                        }
                        pq.pop();
                    }
                }
            }
        }
        if (!cq)
        {

            if (pqb && !queueb && !stackb)
            {
                cout << "priority queue";
            }
            else if (!pqb && queueb && !stackb)
            {
                cout << "queue";
            }
            else if (!pqb && !queueb && stackb)
            {
                cout << "stack";
            }
            else if (!pqb && !queueb && !stackb)
            {
                cout << "impossible";
            }
            else
            {
                cout << "not sure";
            }
        }
        else{
            cout<<"impossible";
        }
        cout << '\n';
    }

    return 0;
}