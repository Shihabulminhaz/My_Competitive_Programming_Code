#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %lld: %lld\n",i,a);
#define ll unsigned long long
#define max 1000000000


bool isMarked[max];
vector<ll>primes;

void sieve()
{
    isMarked[1] = 1;
    for(int i = 3; i * i<=max; i+=2)
    {
        if(isMarked[i]==0)
        {
            for(int j = i * i; j<=max; j += i<<2)
            {
                isMarked[j] = 1;
            }
            //primes.push_back(i);
        }
    }
    for(int i = 3; i<max; i+=2)
    {
        if(isMarked[i]==0) primes.push_back(i);
    }
}
int main()
{

    ll t,n;
    ll j,cnt;
    sieve();
    cout << primes.size()<<" "<<primes[primes.size()-1];
  /*  for(int i = 0; i<max; i++)
    {
        cout << primes[i] << endl;
    }*/
    cin >> t;
    for(j=1; j<=t; j++)
    {
        cin >> n;
        cnt=0;
        if(n==4)
            cnt=1;

        else
        {
            for(ll i=0; i<primes.size(); i++)
            {
                ll x = primes[i];
                ll y = n - x;

                if(y<x)
                {
                    break;
                }
                else if(isMarked[y]==0)
                {
                    cnt++ ;
                }
            }
        }
        ppi(j,cnt);
    }
    return 0;
}

