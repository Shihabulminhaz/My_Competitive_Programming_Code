#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
pair<int, int>a[10005];
int main()
{
    int power,n;
    bool flag = true;
    cin >> power >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i].first >> a[i].second;

    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(power<=a[i].first)
        {
            flag = false;
        }
        else
        {
            power += a[i].second;
        }
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
