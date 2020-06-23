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

    int a,b;
    cin >> a >> b;
    cout << min(a,b) << " " << (max(a,b)-min(a,b))/2 << endl;
    return 0;
}
