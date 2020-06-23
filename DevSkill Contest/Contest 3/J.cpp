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
    long int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a<b)
            cout << "<\n";
        else if(a>b)
            cout << ">\n";
        else
            cout << "=\n";
    }

    return 0;
}

