#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
set<int>st;

int main()
{

    int n,m,x,y;
    cin >> n >> m;
    while(n--)
    {
        cin >> x;
        for(int i=1; i<=x; i++)
        {
            cin >> y;
            st.insert(y);
        }
    }

    if(m==st.size())
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
