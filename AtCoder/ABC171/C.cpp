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
    string s="";
    ll n;
    cin >> n;
    while(n>0)
    {
        n-=1;
        s+='a'+(n%26);
        n/=26;
    }
    for(ll i=s.size()-1; i>=0; i--)
        cout << s[i];
    return 0;
}

