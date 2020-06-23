#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define mx 1000000007

ll dp[100005];
void factorial()
{
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2; i<100000; i++)
    {
        dp[i] = (dp[i-1]*i)%mx;
    }
}

int main()
{

    int n,num;
    factorial();
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        cout << dp[num] << endl;
    }
    return 0;
}
