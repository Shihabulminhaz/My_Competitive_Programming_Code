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

    int t,b,p,f,h,c,sum=0;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> b >> p >> f;
        cin >> h >> c;
        if(h>c)
        {
            sum+=min(b/2,p)*h;
            b-=min(b/2,p)*2;
            sum+=min(b/2,f)*c;
        }
        else
        {
            sum+=min(b/2,f)*c;
            b-=min(b/2,f)*2;
            sum+=min(b/2,p)*h;
        }
        cout << sum << endl;
    }
    return 0;
}
