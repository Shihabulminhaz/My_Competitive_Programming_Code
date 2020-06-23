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

    int t,n,x,a,b,ans;
    fi(t);
    while(t--)
    {
        fi(n);
        fi(x);
        fi(a);
        fi(b);

        ans = min((n-1), abs(a-b)+x);
        pi(ans);
    }

    return 0;
}
