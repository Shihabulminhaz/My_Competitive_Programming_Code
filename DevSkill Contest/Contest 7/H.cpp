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

    ll n,sum,num;
    while(true)
    {
        sum = 0;
        cin >> n;
        if(n==0)
            break;
        else if(n>0 && n<10)
            cout << n << endl;
        else
        {
            while(n>9)
            {

                sum = 0;
                while(n>0)
                {
                    num = n % 10;
                    sum = sum + num;
                    n /= 10;
                }
                n=sum;
            }
            cout << sum << endl;
        }

    }
    return 0;
}

