#include<stdio.h>
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d ",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int isPrime[100005];
int primes[100005];
int k=1;

void seieve(int n)
{
    primes[0] = 2;
    for(long long i=3; i<=n; i+=2)
    {
        if(!isPrime[i]){
            primes[k] = i;
            k++;
        }
        for(long long j=i*i; j<=n; j+=i<<1)
            isPrime[j] = 1;

    }
}

int main()
{
   // fast
    int n;
    fi(n)
    if(n==1 || n==2)
       printf("NO\n");
    else
    {
        seieve(n);
        for(int i=0; i<k; i++)
            pi(primes[i])
    }
    return 0;
}

