#include<bits/stdc++.h>
using namespace std;
#define max 1050

bool isMarked[max];
void sieve()
{
    for(int i = 2; i * i<=max; i++)
    {
        if(isMarked[i]==0)
        {
            for(int j = i * i; j<=max; j += i)
            {
                isMarked[j] = 1;
            }
        }
    }
}

int main()
{
    sieve();
    int sum;
    string s;

    while(cin >> s)
    {
        sum = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>'Z')
                sum+=s[i] - 'a' + 1;
            else
            {
                sum+=s[i] - 'A' + 27;
            }
        }

        if(isMarked[sum])
            cout << "It is not a prime word.\n";
        else
            cout << "It is a prime word.\n";
    }
    return 0;
}

