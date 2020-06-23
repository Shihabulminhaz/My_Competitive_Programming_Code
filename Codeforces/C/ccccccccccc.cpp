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

    ll t,n,mx,mn,x,mxx,mnn;
    cin >> t;
    while(t--)
    {
        mxx = 0;
        mnn = 0;
        mx = 0;
        mn = -9999999999;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(0<x && mx<=x)
            {
                if(mx==x)
                {
                    mxx = mxx + x;
                }
                else
                {
                    mx = x;
                    mxx = mx;
                }
            }
            if(x<0 && x>=mn)
            {
                if(mn==x)
                    mnn += x;
                else
                {
                    mn = x;
                    mnn = mn;
                }
            }
        }

        cout << mxx+mnn << endl;
    }
    return 0;
}
