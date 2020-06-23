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
    int h1,m1,h2,m2,k,m,x;
    cin >> h1 >> m1 >> h2 >> m2 >> k;
    m = m2-m1;
    if(m<0)
    {
        m+=60;
        x = (h2 - h1 - 1)*60 + m - k;
    }
    else{
        x = (h2-h1)*60+m - k;
    }
    cout << x << endl;
    return 0;
}
