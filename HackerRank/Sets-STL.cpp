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

    set<int>st;
    int n,y,x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==1)
        {
            cin >> y;
            st.insert(y);
        }
        else if(x==2)
        {
            cin >> y;
            st.erase(y);
        }
        else
        {
            cin >> y;
            if(st.find(y)!=st.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
