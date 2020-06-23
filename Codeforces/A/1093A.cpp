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
    int t,x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        if(x<8)
            cout << 1 << endl;
        else
            cout << x/2 << endl;
    }
    return 0;
}

