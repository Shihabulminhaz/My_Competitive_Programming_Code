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

    ll t,n,a,b;
    cin >> t;
    while(t--)
    {
        a=0,b=0;
        cin >> n;
        for(int i=1; i<=n/2-1; i++)
        {
            a+=pow(2,i);
        }
        a+=pow(2,n);

        for(int i=n/2; i<n; i++)
        {
            b+=pow(2,i);
        }
        cout << abs(a-b) << endl;
    }
    return 0;
}
