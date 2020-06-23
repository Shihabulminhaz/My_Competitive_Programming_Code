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

    int m,n,cnt,t,x;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        double lg = m * log10(n);
        cout << floor(lg)+1 << endl;
    }
    return 0;
}
