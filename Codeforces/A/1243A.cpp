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
    int t,n,arr[1001],ans;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr,arr+n);
        reverse(arr,arr+n);

        for(int i=0; i<n; i++)
        {
            if(arr[i]>=i+1)
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
