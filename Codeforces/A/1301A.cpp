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

    string a,b,c;
    int t;
    cin >> t;
    while(t--)
    {
        bool flag = true;
        cin >> a >> b >> c;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==c[i] || b[i]==c[i])
                 continue;
            else
            {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
    }
    return 0;
}

