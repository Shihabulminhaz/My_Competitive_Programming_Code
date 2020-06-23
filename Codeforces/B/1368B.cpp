#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll cnt[10];

int main()
{
    fast
    string s="codeforces";
    ll n,i=0,x=1;
    cin >> n;
    while(true)
    {
        for(int j=0; j<10; j++)
            x*=cnt[j];
        if(x>=n)
        {
            break;
        }
        cnt[i%10]++;
        i++;
        x = 1;
    }

    for(i = 0; i<10; i++)
    {
        for(int j=0; j<cnt[i]; j++)
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
