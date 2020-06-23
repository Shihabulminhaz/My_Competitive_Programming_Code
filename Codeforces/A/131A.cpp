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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,s1;
    cin >> s;
    s1=s;
    if(islower(s[0]))
    {
        s1[0] = s[0] - 32;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s1[i] = s[i] + 32;
            else
            {
                cout << s << endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s1[i] = s[i] + 32;
            else
            {
                cout << s << endl;
                return 0;
            }
        }
    }
    cout << s1 << endl;
    return 0;
}

