#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    ll n,k;
    cin >> n >> k;
    int x = n*2;
    int y = n*4;

    if(k>=x && k<=y){
        if(k%2==0) cout << "Yes\n";
        else cout << "No\n";
    }
    else cout << "No\n";
    return 0;
}


