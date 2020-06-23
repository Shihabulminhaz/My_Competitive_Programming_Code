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
    int n,balance;
    cin >> n;
    cout << max(n,max(n/10,(n/100)*10+n%10)) << endl;
    return 0;
}
