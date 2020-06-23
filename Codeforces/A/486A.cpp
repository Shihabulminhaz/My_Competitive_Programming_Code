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
    ll n;
    cin >> n;
    if(n%2==0)
        cout << n/2 << endl;
    else
        cout << (n+1)/2*-1 << endl;
    return 0;
}

