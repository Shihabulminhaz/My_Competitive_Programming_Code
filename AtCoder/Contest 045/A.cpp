#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll arr[205];
int main()
{
    fast
    int n,m,t,ans=0;
    string s;
    ll x;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        sort(arr+1,arr+n+1);
        cin >> s;
        if(n==1)
        {
            int a;
            if(s[arr[1]-1]=='1')
                a=1;
            else
                a = 0;

            cout << 1 << endl;
        }
        else
        {
            int a;
            if(s[arr[1]-1]=='1')
                a=1;
            else
                a = 0;

            int b;
            if(s[arr[2]-1]=='1')
                b=1;
            else
                b = 0;

            ans = a^ans;
            ans = b^ans;
        }
        cout << ans << endl;
    }
    return 0;
}

