#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long int
#define max 100000000

bool isMarked[max+5];
vector<int>primes;

void sieve()
{
    isMarked[1] = 1;
    for(int i = 2; i * i<=max; i++)
    {
        if(isMarked[i]==0)
        {
            for(int j = i * i; j<=max; j = j+i)
            {
                isMarked[j] = 1;
            }
            //primes.push_back(i);
        }
    }
    for(int i = 2; i<max; i++)
    {
        if(isMarked[i]==0) primes.push_back(i);
    }
}

int main()
{

    int n=0,t;
    sieve();

    while(n<80000000){
        cout << primes[n] << endl;
        if(primes[n]==99998953) break;
        n = n + 100;
    }
    return 0;
}


