#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 100000
//#define N 4294967296

bool isMarked[max+5];
vector<ll>primes;

void sieve()
{
    isMarked[1] = 1;
    for(long int i = 2; i * i<=4294967295; i = i + 2 )
    {
        if(isMarked[i]==0)
        {
            for(long int j = i * i; j<=4294967295; j = j + i + i)
            {
                isMarked[j] = 1;
            }
        }
    }

    primes.push_back(2);
    for(int i = 3; i<max; i+=2)
    {
        if(isMarked[i]==0) primes.push_back(i); cout << primes[i-2];
    }
}

int main()
{

    int t;
    long long int n;
    for(t=0;t<10000;t++){
     // cout << 4;
    }
cout << primes.size();
    return 0;
}
