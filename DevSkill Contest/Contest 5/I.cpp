#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define MAX 10001
#define MOD 5


bool isC[MAX+10];
vector<long int>prm;
vector<int>totient;

void sieve()
{
    for(int i=2; i*i<=MAX; i++)
    {
        if(!isC[i])
        {
            for(int j=i*i; j<=MAX; j+=i+i)
            {
                isC[j] = 1;
            }
        }
    }
    prm.push_back(2);
    for(int i=3; i<=MAX; i+=2)
    {
        if(!isC[i])
            prm.push_back(i);
    }
}

int getTotient()
{

    for(int j=1;j<=10000;j++){
    ll res = j;
    for(int i=0; i<(int)prm.size() && prm[i] <=j; i++)
    {
        if(j % prm[i] == 0)
        {
            res*=prm[i]-1;
            res/=prm[i];
        }
    }
    totient.push_back(res);
    }
}



int main()
{
    sieve();
    getTotient();

    return 0;
}

