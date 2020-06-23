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
    int n,cnt=0,j=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=1; i<n; i++)
    {
        if(s[i-1]==s[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
