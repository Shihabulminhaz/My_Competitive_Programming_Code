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
    int t,cnt,n,k,ans;
    cin >> t;
    string s;
    while(t--)
    {
        bool flag = true;
        ans = 0,cnt=0;
        cin >> n >> k;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                cnt++;
            else
            {
                // cout << cnt << endl;
                if(flag)
                {
                    cnt = cnt - k;
                    if(cnt>0)
                        ans+=cnt/k;
                }
                else
                {
                    cnt = cnt - k*2;
                    if(cnt>0)
                        ans+=cnt/k;
                }
                flag = false;
                cnt=0;
            }
        }
        if(cnt>0)
        {
            if(flag)
            {
                if(cnt>0)
                    ans+=cnt/k;
                    ans--;
            }
            else
            {
                cnt = cnt - k;
                ans+=cnt/(k);
            }
        }
        if(flag){
            if(cnt<=k*2) ans = 1;
            else ans = cnt/(k*2) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}

