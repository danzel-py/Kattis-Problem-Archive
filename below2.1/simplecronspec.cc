#include <iostream>
#include <regex>
#include <unordered_set>
#include <map>
#include <utility>
using namespace std;
// a bit slow
int main(){
    map<pair <int, pair<int,int> >, int > secmap;
    int tc;
    cin>>tc;
    int h,m,s;
    string hs,ms,ss;
    regex e("[0-9]+-*[0-9]*");
    regex qq("(.*)-(.*)");
    smatch sres;
    string pointedstr;
    int maaax = 0;
    int rip = 0;
    unordered_set<int> hvect;
    unordered_set<int> mvect;
    unordered_set<int> svect;
    for (int i = 0; i < tc; i++)
    {
        hvect.clear();
        mvect.clear();
        svect.clear();
        h = 0, m = 0, s= 0;
        cin>>hs>>ms>>ss;
        if(hs == "*"){
            h = 24;
            for (int k = 0; k < 24; k++)
            {
                hvect.insert(k);
            }
            
        }else{
            for(sregex_iterator i = sregex_iterator(hs.begin(),hs.end(),e); i!=sregex_iterator(); ++i){
                smatch sm = *i;
                pointedstr = sm.str();
                if(regex_search(pointedstr,sres,qq)){
                    h += stoi(sres[2]) - stoi(sres[1]) + 1;
                    for (int k = stoi(sres[1]); k <= stoi(sres[2]); k++)
                    {
                        hvect.insert(k);
                    }
                    
                }
                else{
                    h += 1;
                    hvect.insert(stoi(pointedstr));
                }
            }
        }
        if(ms == "*"){
            m = 60;
            for (int k = 0; k < 60; k++)
            {
                mvect.insert(k);
            }
        }else{
            for(sregex_iterator i = sregex_iterator(ms.begin(),ms.end(),e); i!=sregex_iterator(); ++i){
                smatch sm = *i;
                pointedstr = sm.str();
                if(regex_search(pointedstr,sres,qq)){
                    m += stoi(sres[2]) - stoi(sres[1]) + 1;
                    for (int k = stoi(sres[1]); k <= stoi(sres[2]); k++)
                    {
                        mvect.insert(k);
                    }
                }
                else{
                    m += 1;
                    mvect.insert(stoi(pointedstr));
                }
            }
        
        }
        if(ss == "*"){
            s = 60;
            for (int k = 0; k < 60; k++)
            {
                svect.insert(k);
            }
        }
        else{
            for(sregex_iterator i = sregex_iterator(ss.begin(),ss.end(),e); i!=sregex_iterator(); ++i){
                smatch sm = *i;
                pointedstr = sm.str();
                if(regex_search(pointedstr,sres,qq)){
                    s += stoi(sres[2]) - stoi(sres[1]) + 1;
                    for (int k = stoi(sres[1]); k <= stoi(sres[2]); k++)
                    {
                        svect.insert(k);
                    }
                }
                else{
                    s += 1;
                    svect.insert(stoi(pointedstr));
                }
            }
        }
        for(auto r:hvect){
            for(auto t:mvect){
                for(auto y:svect){
                    if(secmap[make_pair(r, make_pair(t,y))]){
                        rip++;
                        continue;
                    }
                    secmap[make_pair(r, make_pair(t,y))]++;
                }
            }
        }
        maaax += h*m*s;

    }
    cout<<maaax-rip<<' '<<maaax;
    
    return 0;
}