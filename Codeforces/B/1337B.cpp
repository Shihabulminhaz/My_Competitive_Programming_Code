#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,h,n,m,x;
    cin >> t;
    while(t--)
    {
        cin >> h >> n >> m;
        if(m==1)
        {
            h = h -10;
            m--;
        }

        if(h>0)
        {
            while(n--)
            {

                h = h/2;
                h = h+10;
                if(h<=0)
                    break;
            }
        }
        if(h>0)
        {
            while(m--)
            {
                h = h-10;
                if(h<=0)
                    break;
            }
        }
        if(h<=0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
