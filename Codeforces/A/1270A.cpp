#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n,k1,k2,p1[101],p2[101];
    cin >> t;
    while(t--)
    {
        cin >> n >> k1 >> k2;
        for(int i=0; i<k1; i++)
            cin >> p1[i];
        sort(p1,p1+k1);

        for(int i=0; i<k2; i++)
            cin >> p2[i];
        sort(p2,p2+k2);

        if(p1[k1-1]>p2[k2-1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

