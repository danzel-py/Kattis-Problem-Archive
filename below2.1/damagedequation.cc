#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mem1, mem2;
    bool couted = false;
    string arr[4] = {" * ", " + ", " - ", " / "};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mem1 = 20000001;
            mem2 = 20000000;
            if (i == 0)
            {
                mem1 = a * b;
            }
            else if (i == 1)
            {
                mem1 = a + b;
            }
            else if (i == 2)
            {
                mem1 = a - b;
            }
            else if (i == 3)
            {
                if (b == 0)
                    break;
                mem1 = a / b;
            }
            if (j == 0)
            {
                mem2 = c * d;
            }else if (j == 1)
            {
                mem2 = c+d;
            }else if (j == 2)
            {
                mem2 = c-d;
            }else if (j == 3)
            {
                if(d == 0){
                    continue;
                }
                mem2 = c/d;
            }
            if(mem1 == mem2){
                cout<<a<<arr[i]<<b<<" = "<<c<<arr[j]<<d<<'\n';
                couted = true;
            }
            
            
            
        }
    }
    if(!couted){
        cout<<"problems ahead";
    }

    return 0;
}