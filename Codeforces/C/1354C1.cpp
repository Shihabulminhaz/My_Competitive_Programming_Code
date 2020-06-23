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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double n,t,s=1,ans;
    cin >> t;
    while(t--){
        cin >> n;
        n=n*2;
        ans = 1/tan(3.14159265358979/n);
        cout << setprecision(8) << fixed << ans << endl;
    }

    return 0;
}

