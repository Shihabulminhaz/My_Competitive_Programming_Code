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

    int t,a,b,c,d,x,y,k;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d >> k;
        if(a%c==0)
        {
            x = a/c;
        }
        else
        {
            x = a/c + 1;
        }

        if(b%d==0)
        {
            y = b/d;
        }
        else
        {
            y = b/d + 1;
        }

        if(x+y>k)
            cout << -1 << endl;
        else
            cout << x << " " << y << endl;
    }
    return 0;
}
