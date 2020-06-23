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

    double t,n,a,b,c,d;
    cin >> t;
    while(t--)
    {
       bool flag = false;
        cin >> n >> a >> b >> c >> d;
        if((c-d)/(a+b)>n || (c+d)/(a-b)<n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

