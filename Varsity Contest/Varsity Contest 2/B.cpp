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
    int t,i=1;
    double n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << "Case " << i << ": " << setprecision(2) << fixed << 4*n*n - acos(-1) * n*n << endl;
        i++;
    }
    return 0;
}

