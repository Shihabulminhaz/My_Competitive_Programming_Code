#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll unsigned long long
#define max 10000007

int main()
{

    ll n,ans=1;
    cin >> n;
    if(n==0)
        cout << ans << endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            ans*=2;
            if(i==13)
                ans-=100;
            //cout << setprecision(0) << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
