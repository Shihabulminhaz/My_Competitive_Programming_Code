#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int divCnt[max+5];
vector<int>divisors[max+5];

void sieve_div(int n)
{

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j = j+i)
        {
            divCnt[j]++;
            divisors[j].push_back(i);

        }
    }

}

int main()
{
 sieve_div(1000000);

    return 0;
}


