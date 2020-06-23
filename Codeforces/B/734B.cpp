#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long

int main()
{

    int k2,k3,k5,k6,ans,x,y;
    cin >> k2 >> k3 >> k5 >> k6;
    x = min(min(k2,k5),k6);
    y = min(k3,(k2-x));
    y = max(0,y);
    cout << x*256 + y*32 << endl;
    return 0;
}
