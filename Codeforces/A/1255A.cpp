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

    int t,n,a,b,ans;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a==b)
            cout << 0 << endl;
        else
        {
            if(a>b)
                swap(a,b);
            b = b - a;
            ans = b / 5;
            if(b%5==0)
                cout << ans << endl;
            else if(b%5==1 || b%5==2)
                cout << ans+1 << endl;
            else
                cout << ans+2 << endl;
        }
    }
    return 0;
}
