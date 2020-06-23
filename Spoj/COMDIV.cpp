#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int arr[1000005];

void divisor(int n)
{
    int cnt = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
            if(n/i!=i)
            {
                cnt++;
            }
        }

    }
    arr[n] = cnt;
}
int main()
{

    int t,a,b,gcd;
    fi(t);
    while(t--)
    {
        fi(a);
        fi(b);
        gcd = __gcd(a,b);
        if(arr[gcd]==0)
        {
            divisor(gcd);
            pi(arr[gcd]);
        }
        else
        {
            pi(arr[gcd]);
        }
    }
    return 0;
}

