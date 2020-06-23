#include<bits/stdc++.h>
using namespace std;

int mark[1000000], Prime[100000], Pt = 0;

void Sieve()
{
    int i, j;
    for(i = 3; i < 1000000; i += 2)
    {
        if(mark[i] == 0)
        {
            Prime[Pt++] = i;
            for(j = 3; i*j < 1000000; j += 2)
                mark[i*j] = 1;
        }
    }
}


int main()
{
    int n, i;
    Sieve();
    while(cin >> n)
    {
        if(n==0)
            break;
        int x, y;
        for(i = 0; i < Pt; i++)
        {
            x = Prime[i], y = n-Prime[i];
            if(x > y)
            {
                cout << "Goldbach's conjecture is wrong." << endl;
                break;
            }
            if(mark[x] == 0 && mark[y] == 0)
            {
                cout << n << " = " << x << " + " << y << endl;
                break;
            }
        }
    }
    return 0;
}
