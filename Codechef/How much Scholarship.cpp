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

    int n;
    cin >> n;
    if(n<51) cout << 100 << endl;
    else if(n<101) cout << 50 << endl;
    else cout << 0 << endl;
    return 0;
}

