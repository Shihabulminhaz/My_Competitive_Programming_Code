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

    string s,x[6],ans="NO";
    cin >> s;
    for(int i=0; i<5; i++)
        cin >> x[i];

    for(int i=0; i<5; i++)
    {
        if(s[0]==x[i][0] || s[1]==x[i][1])
        {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

