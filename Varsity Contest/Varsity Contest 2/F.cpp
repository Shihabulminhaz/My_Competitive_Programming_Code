#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double arr[1000005];

int main()
{
    fast
    int t,n,b,i=1;
    for(int i=1; i<=1000000; i++)
    {
        arr[i] = arr[i-1] + log(i);
    }

    cin >> t;

    while(t--)
    {
        cin >> n >> b;
        ll ans=(arr[n]/log(b)) + 1;

        cout << "Case " << i << ": " << ans << endl;
        i++;
    }
    return 0;
}
