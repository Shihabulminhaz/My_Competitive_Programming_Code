#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int arr[100005];
int main()
{
    fast
    ll n,x,l=0,mx=0,m;
    cin >> n >> x;
    for(ll i=1; i<=n; i++)
    {
        cin >> m;
        for(ll j=1; j<=m; j++)
        {
            l++;
            arr[l] = j + arr[l-1];
        }

    }
    for(ll i=0; i<l-x; i++)
    {
        ll z = arr[i+x] - arr[i];
        if(z>mx)
            mx = z;
    }
    for(ll i=1;i<x;i++){
        ll z = arr[l] - arr[l-x+i] + arr[i];
        if(z>mx) mx = z;
    }
    cout << mx << endl;
    return 0;
}


