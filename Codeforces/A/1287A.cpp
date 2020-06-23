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
    int t,n,mx,cnt;
    bool flag ;
    string s;
    cin >> t;
    while(t--)
    {
        flag = false;
        mx = cnt = 0;
        cin >> n;
        cin >> s;
        for(int i=0; i<n; i++)
            if(s[i]=='A')
            {
                flag = true;
                mx = max(mx,cnt);
                cnt=0;
            }
            else if(flag){
                cnt++;
            }
        mx = max(mx,cnt);
        cout << mx << endl;
    }
    return 0;
}
