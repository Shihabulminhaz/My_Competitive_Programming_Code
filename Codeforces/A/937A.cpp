#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int n,a;
    set<int>st;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>0) st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}
