#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define MAX 1000000
#define MOD 5


bool isC[MAX+10];
vector<long int>prm;

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

int getTotient(int N)
{
    ll res = N;
        for(int i=0; prm[i]<=N/2; i++)
    {
        if(N % prm[i] == 0)
        {
            res*=prm[i]-1;
            res/=prm[i];
        }
    }
    return res;

}



int main()
{
    sieve();
    int N,x,is_prime;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        //cin >> x;
        x = i;
        if(x==1 || x==2)
        {
            cout << 1 << endl;
        }
        else if(x>2)
        {
            is_prime = 1;
            for(int j=0; prm[j]*prm[j]<=x; j++)
            {
                if(x%prm[j]==0)
                {
                    is_prime = 0;
                    break;
                }
            }

            if(is_prime==1)
                cout << i << " " << x - 1 << endl;
            else
                cout << i << " " << getTotient(x) << endl;

        }
    }
    return 0;
}
