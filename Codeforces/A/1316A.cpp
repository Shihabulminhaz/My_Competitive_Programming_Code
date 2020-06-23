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

    ll t,n,m,a,sum=0;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            sum += a;
        }
        if(sum>m)
            cout << m << endl;
        else
            cout << sum << endl;
    }
    return 0;
}

