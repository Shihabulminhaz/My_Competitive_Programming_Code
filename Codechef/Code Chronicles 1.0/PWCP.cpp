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
    int t,n,arr[100000];
    cin >> t;
    while(t--)
    {
        int ans=0;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n; i++)
        {
            cout << arr[i] << arr[n-1-i];
            if(arr[i]!=arr[n-1-i])
            {
                ans++;
            }
        }
        cout << n-ans << endl;
    }
    return 0;
}
