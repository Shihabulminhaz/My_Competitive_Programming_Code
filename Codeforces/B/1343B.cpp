#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000007

int main()
{

    ll n,t,x,y,z,i,cnt=0;
    cin >> t;
    while(t--)
    {
        cnt=0;
        x = 2;
        y = 1;
        cin >> n;

        if(n%2==0)
            z = n/2;
        else
            z = n;
        if(z%2==1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(i=2; i<=n; i+=2)
            {
                cout << i << " ";

            }

            for(i=1; i<n-2; i+=2)
            {
                cout << i << " ";
                cnt++;
            }
            z = n/2;

            cout << z*(z+1) - cnt*cnt << endl;
        }
    }
    return 0;
}

