#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long int
#define max 1000009
ll primeCnt[max+5];
bool isMarked[max+5];
ll primes[max];

void sieve(int N)
{
    isMarked[1] = 1;
    for(ll i = 2; i * i<=N; i++)
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

    long long int n,t,x,l=0,y;
    //ll primes[max];

    sieve(1000001);

    for(ll i=2; i<=1000001; i++)
    {
        if(isMarked[i]==0)
        {
            primes[l] = i*i;
            l++;
        }
    }

    //freopen("input.txt","r",stdin);
    cin >> t;
    while(t--)
    {
        cin >> n;
        y = upper_bound(primes, primes+l, n) - primes;
        if(primes[y-1]==n){
            cout << "YES\n";
            //freopen("input.txt","w",stdin);
            }
        else{
            cout << "NO\n";
            //freopen("input.txt","w",stdin);
            }
    }

    return 0;
}

