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

    string s;
    cin >> s;
    int dp[100005],x,y,n;
    dp[0] = 0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            dp[i] = dp[i-1] + 1;
        }
        else
        {
            dp[i] = dp[i-1];
        }
    }
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        cout << dp[y-1] - dp[x-1] << endl;
    }
    return 0;
}
