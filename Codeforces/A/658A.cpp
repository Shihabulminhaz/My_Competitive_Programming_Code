#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,t[1005],minute=0,point[1005],lima=0,red=0;
    cin >> n >> c;
    for(int i=0; i<n; i++)
    {
        cin >> point[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> t[i];
        minute+= t[i];
        lima+=max(0,point[i]-c*minute);
    }

    minute = 0;
    for(int i=0; i<n; i++)
    {
        minute+= t[n-1-i];
        red+=max(0,point[n-1-i]-c*minute);
    }

    if(lima>red)
        cout << "Limak\n";
    else if(lima<red)
        cout << "Radewoosh\n";
    else
        cout << "Tie\n";
    return 0;
}

