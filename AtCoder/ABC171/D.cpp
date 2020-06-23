#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll arr[100005];
int main()
{
    fast
    ll n,x,sum=0,q,a,b;
    cin >> n;
    for(ll i=1;i<=n;i++){
        cin >> x;
        sum+=x;
        arr[x]++;
    }
    cin >> q;
    while(q--){
        cin >> a >> b;
        sum+=(arr[a]*b - arr[a]*a);
        arr[b]+=arr[a];
        arr[a] = 0;
        cout << sum << endl;
    }
    return 0;
}

