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
    int n,a,b,t;
    cin >> t;
    while(t--)
    {
        string s = "";
        cin >> n >> a >> b;
        int l = n/b;
        while(l--)
        {
            for(int i=0; i<b; i++)
            {
                s += 'a'+i;
            }
        }
        for(int i=0; i<n%b; i++)
        {
            s += 'a'+i;
        }

        cout << s << endl;
    }
    return 0;
}

