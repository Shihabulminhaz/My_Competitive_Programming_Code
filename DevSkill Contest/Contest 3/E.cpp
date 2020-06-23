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

    int t,a,b,x=1;
    cin >> t;

    while(t--)
    {

        long int   sum = 0;
        cin >> a >> b;
        if(a%2==0)
            a++;
        if(b%2==0)
            b--;
        for(int i=a; i<=b; i=i+2)
        {
            sum = sum + i;
        }
        printf("Case %d: %ld\n",x,sum);
        x++;
    }

    return 0;
}

