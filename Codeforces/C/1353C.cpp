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

    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        ll sum=0;
        for(ll i=1;i<=n/2;i++){
            sum+=i*i*8;
        }
        cout << sum << endl;
    }
    return 0;
}
