#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int main()
{

    ll n,s,sum,ans,x,a;
    while(scanf("%lld %lld",&n,&s)!=EOF)
    {
        vector<ll>vec;
        sum = 0,ans = n+2,x=0;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            vec.push_back(a);
            sum += vec[i];
            while(sum>=s)
            {
                ans = min(ans,i-x+1);
                sum -= vec[x];
                x++;
            }
        }
        if(ans==n+2)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
