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
    int t,ans;
    string s;
    cin >> t;
    while(t--)
    {
        ans=0;
        cin >> s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='x')
            {
                if(s[i+1]=='y')
                {
                    ans++;
                    i++;
                }
            }
            else
            {
                if(s[i+1]=='x')
                {
                    ans++;
                    i++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

