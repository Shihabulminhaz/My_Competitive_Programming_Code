#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}

int main()
{
    fast
    FI(); /// skip this line for compile
    int t,n,x,y;
    cin >> t;
    while(t--)
    {
        x = y = 0;
        cin >> n;
        string s,s1="",s2="";
        cin >> s;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                s1+=s[i];
                x++;
            }
            else break;
        }
        y = n-1;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                s2+=s[i];
                y--;
            }
            else break;
        }

        if(x<=y) s1+="0";
        s1+=s2;
        cout << s1 << endl;
    }
    return 0;
}

