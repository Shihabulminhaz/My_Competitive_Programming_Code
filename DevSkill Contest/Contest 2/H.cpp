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

    long int m,n,k;
    ll i=1,j;
    fli(m);
    fli(n);
    fli(k);
    if(k<=n)
    {
        printf("%ld \n",k);
    }
    else
    {
        i += k/n;
        j = k%n;
        printf("%lld \n",i*j);
    }
}


