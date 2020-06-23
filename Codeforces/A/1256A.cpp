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
    int t;
    long int a,b,n,s,div;
    fi(t);
    while(t--)
    {
        fli(a);
        fli(b);
        fli(n);
        fli(s);
        div = s/n;
        if(a>=div)
        {
            if((div * n + b)>=s)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if((a * n + b)>=s)
                printf("YES\n");
            else
                printf("NO\n");
        }

    }
    return 0;
}
