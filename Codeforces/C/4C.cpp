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

    int n;
    string s;
    map<string, int>mp;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(mp[s]==0)
        {
            cout << "OK\n";
            mp[s]==0;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}
