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

    ll t,a,b,sum,x;
    cin >> t;
    while(t--)
    {
        sum=0;
        cin >> a >> b;
        if(a<b)
            sum=0;
        else if(a==b)
            sum = a%10;
        else
        {
            for(ll i=b; i<=10*b; i+=b)
            {
                if(i>a)
                    break;
                sum+=i%10;
            }
            x = (a/(b*10));
            if(x==0)
                x=1;

            sum*=x;

            for(ll i=b*10*x+b; i<a; i+=b)
            {
                sum+=i%10;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

