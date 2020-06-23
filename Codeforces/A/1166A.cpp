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

    int t,n,l;
    string s,ans;
    cin >> t;
    while(t--)
    {
        ans = "NO";
        cin >> n;
        cin >> s;
        if(n<11)
            ans = "NO";
        else
        {
            for(int i=0; i<=n-11; i++)
            {
                if(s[i]=='8'){
                    ans = "YES";
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

