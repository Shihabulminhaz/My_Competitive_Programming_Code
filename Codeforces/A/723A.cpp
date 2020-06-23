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

    int a,b,c;
    cin >> a >> b >> c;
    cout << max(a,max(b,c)) - min(a,min(b,c)) << endl;
    return 0;
}

