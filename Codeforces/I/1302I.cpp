#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define MAX 200000
#define bs 3
#define MOD 1000000007

char T[MAX + 5];
set<int>st;

ll get_T_hash(int l,int nt)
{

    for(int i=0; i<=nt-l; i++)
    {
        ll h = 0;
        for(int j = i; j < i+l; j++)
        {
            h = ((h * bs) + T[j]);
        }
        st.insert(h);
    }
    cout << st.size() << endl;
}


int main()
{

    int l,nt;
    cin >> nt >> l;
    scanf("%s", T);
    get_T_hash(l,nt);
    return 0;
}
