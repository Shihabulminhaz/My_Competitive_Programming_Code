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

    int n,cnt1=0,cnt2=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            cnt1++;
        else if(s[i]=='F' && s[i+1]=='S')
            cnt2++;
    }
    if(cnt1>cnt2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
