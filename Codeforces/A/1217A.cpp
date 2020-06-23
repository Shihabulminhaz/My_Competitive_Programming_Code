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

    int t,a,b,c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a>b)
        {
            if(b+c==a)
                cout << c << endl;
            else if(a>b+c)
                cout << c+1 << endl;
            else
                cout << (a-b+c+1)/2 << endl;
        }
        else
        {
            if(a+c<=b)
                cout << 0 << endl;
            else
                cout << (a-b+c+1)/2 << endl;
        }
    }
    return 0;
}
