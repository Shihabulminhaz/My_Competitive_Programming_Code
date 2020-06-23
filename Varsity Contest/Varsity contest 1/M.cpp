#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

set<ll>CD;

int main()
{

    ll m,n,a,ans;
    while(cin >> m >> n)
    {
        ans = 0;
        CD.clear();
        if(m==0 && n==0 )
            break;
        else
        {
            for(int i=0; i<m; i++)
            {
                cin >> a;
                CD.insert(a);
            }

            for(int i=0; i<n; i++)
            {
                cin >> a;
                if(CD.find(a)!= CD.end())
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

