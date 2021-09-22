#include <iostream>
#include <sstream>
#define CHANGEFIRST(from, to) else if (word[indexx] == from) word[indexx] = to
using namespace std;

// (b, c, d, g, k, n, p, t)
int main()
{
    string word;
    int kk;
    int indexx;
    bool isupper;
    int i;
    string str;
    getline(cin, str);
    stringstream ss(str);
    while (ss.rdbuf()->in_avail() != 0)
    {
        ss >> word;
        if (word[0] < 'a')
        {
            isupper = true;
            word[0] = char(int(word[0]) - int('A') + int('a'));
        }
        else
        {
            isupper = false;
        }
        if (!(word[0] == 'b' || word[0] == 'c' || word[0] == 'd' || word[0] == 'g' || word[0] == 'k' || word[0] == 'n' || word[0] == 'p' || word[0] == 't'))
        {
            indexx = 0;
            if (word[indexx] == 'a')
            {
                word[indexx] = 'b';
            }
            CHANGEFIRST('e', 'd');
            CHANGEFIRST('f', 'g');
            CHANGEFIRST('h', 'g');
            CHANGEFIRST('i', 'g');
            CHANGEFIRST('j', 'k');
            CHANGEFIRST('l', 'k');
            CHANGEFIRST('m', 'n');
            CHANGEFIRST('o', 'n');
            CHANGEFIRST('q', 'p');
            CHANGEFIRST('r', 'p');
            CHANGEFIRST('s', 't');
            CHANGEFIRST('u', 't');
            CHANGEFIRST('v', 't');
            CHANGEFIRST('w', 't');
            CHANGEFIRST('x', 't');
            CHANGEFIRST('y', 't');
            CHANGEFIRST('z', 't');
        }

        for (int jj = 0; jj < word.length()-1; jj++)
        {
            if (word[jj] == '-')
            {
                i = jj+1;
                while (word[i] != '-')
                {
                    if (word[i] == 'b' || word[i] == 'c' || word[i] == 'd' || word[i] == 'g' || word[i] == 'k' || word[i] == 'n' || word[i] == 'p' || word[i] == 't')
                    {
                        word[i] = word[0];
                    }
                    if(i == word.length()-1){
                        break;
                    }
                    i++;

                }
            }
        }

        i = word.length() - 1;
        if (word[i] == 'b' || word[i] == 'c' || word[i] == 'd' || word[i] == 'g' || word[i] == 'k' || word[i] == 'n' || word[i] == 'p' || word[i] == 't')
        {
            if (int(word[i]) < int('a') + 8)
            {
                word += "ah";
            }
            else if (int(word[i]) < int('a') + 18)
            {
                word += "oh";
            }
            else
            {
                word += "uh";
            }
        }
        if (isupper)
        {
            word[0] = char(int(word[0]) + int('A') - int('a'));
        }
        for (int l = 0; l < word.length(); l++)
        {
            if (word[l] != '-')
            {
                cout << word[l];
            }
        }

        cout << ' ';
    }

    return 0;
}