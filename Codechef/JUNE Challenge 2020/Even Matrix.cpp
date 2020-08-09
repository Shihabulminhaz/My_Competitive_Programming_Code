#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,n;
    cin >> t;
    while(t--)
    {
        int ans = 1;
        cin >> n;
        if(n%2==1)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    cout << ans << " ";
                    ans++;
                }
                cout << endl;
            }
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i%2==1)
                {
                    for(int j=1; j<=n; j++)
                    {
                        cout << ans << " ";
                        ans++;
                    }
                }
                else
                {
                    int x = ans + n - 1;
                    ans = ans + n;
                    for(int j=1; j<=n; j++)
                    {
                        cout << x << " ";
                        x--;
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}
