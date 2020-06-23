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
    ll t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a%b==0)
            cout << 0 << endl;
        else
        {
            a = a%b;
            cout << (b-a) << endl;
        }
    }

    return 0;
}
