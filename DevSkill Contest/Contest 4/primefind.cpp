#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 4294967296‬
#define N 4294967296‬

bool isMarked[max+5];

void sieve(int N)
{
    isMarked[1] = 1;
    for(int i = 2; i * i<=N; i++)
    {
        if(isMarked[i]==0)
        {
            for(int j = i * i; j<=N; j = j+i)
            {
                isMarked[j] = 1;
            }
        }
    }
}

int main()
{

    int t;
    long long int n;

    return 0;
}
