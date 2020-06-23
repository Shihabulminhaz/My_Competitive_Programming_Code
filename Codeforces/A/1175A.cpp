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

    ll t,n,x,k,cnt;
    cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> n>> k;
        while(n>0)
        {
            if(n%k==0)
            {
                n /= k;
                cnt++;
            }
            else
            {
                x = n/k;
                if(x==0)
                    x = n%k;
                else
                    x = n%(x*k);
                n = n-x;
                cnt+=x;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

