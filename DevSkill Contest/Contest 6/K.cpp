#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 1007

bool isMarked[max+5];
vector<int>primes;
int dist[100000],n;
vector<int>primes_fact;

void sieve(int N)
{
    isMarked[1] = 1;
    for(int i = 2; i * i<=N; i++)
    {
        if(isMarked[i]==0)
        {
            for(int j = i * i; j<=N; j +=i)
            {
                isMarked[j] = 1;
            }
        }
    }
    primes.push_back(2);

    for(int i =3 ; i<102; i+=2)
    {
        if(isMarked[i]==0)
            primes.push_back(i);
    }
}

int prime_factor(int n)
{
    int i,test = 0;

    while(!primes_fact.empty())
    {
        primes_fact.pop_back();
    }
    for(i  =0 ; i<primes.size() && primes[i]*primes[i]<=n ; i++)
    {
        while(n%primes[i]==0)
        {
            n/=primes[i];
            test = 1;
        }
        if(test==1)
        {
            primes_fact.push_back(primes[i]);
            test = 0;
        }
    }
    if(n>1)
    {
        primes_fact.push_back(n);
    }

    return primes_fact[primes_fact.size()-2];
}

int getMinMove(int src,int dst)
{
    queue<int>Q;
    Q.push(src);
    for(int i=1; i<10000; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        int v1,v2,v3;
        if(primes_fact.size()==3)
        {
            v1 = u + primes_fact[1];
            v2 = u + primes_fact[0];

            if(v1 <= dst+100)
            {
                if(dist[v1] > dist[u] + 1)
                {
                    dist[v1] = dist[u] + 1;
                    Q.push(v1);
                }
                if(v1 == dst)
                    return dist[dst];
            }
            if(v2 <= dst+100)
            {
                if(dist[v2] > dist[u] + 1)
                {
                    dist[v2] = dist[u] + 1;
                    Q.push(v2);
                }
                if(v2 == dst)
                    return dist[dst];
            }


        }
        else
        {
            v1 = u + primes_fact[2];
            v2 = u + primes_fact[1];
            v3 = u+ primes_fact[0];

            if(v1 <= dst+100)
            {
                if(dist[v1] > dist[u] + 1)
                {
                    dist[v1] = dist[u] + 1;
                    Q.push(v1);
                }
                if(v1 == dst)
                    return dist[dst];
            }
            if(v2 <= dst+100)
            {
                if(dist[v2] > dist[u] + 1)
                {
                    dist[v2] = dist[u] + 1;
                    Q.push(v2);
                }
                if(v2 == dst)
                    return dist[dst];
            }
            if(v3 <= dst+100)
            {
                if(dist[v3] > dist[u] + 1)
                {
                    dist[v3] = dist[u] + 1;
                    Q.push(v3);
                }
                if(v3 == dst)
                    return dist[dst];
            }
        }
    }
    int v3;
    cout << v3 << endl;
    return dist[dst];
}


int main()
{
    sieve(101);
    int t,a,b,min_move;
    cin >> t;
    for(int i =1 ; i<=t; i++)
    {
        cin >> a >> b;
        if(isMarked[a]==0)
        {
            cout << "**" << endl;
            cout << "Case " << i << ": " << -1 << endl;
        }
        else if(a==4 || a==8 || a== 16 || a==32 || a==64 || a==9 || a==27 || a==81 || a==49)
        {
            prime_factor(a);
            if((b-a)%primes_fact[0]!=0)
                cout << "Case " << i << ": " << -1 << endl;
            else
            {
                cout << "Case " << i << ": " << (b-1)/primes_fact[0] << endl;
            }
        }
        else
        {
            prime_factor(a);
            min_move = getMinMove(a,b);
            if(min_move>500)
            {
                cout << "Case " << i << ": " << -1 << endl;
            }
            else
            {
                cout << "Case " << i << ": " << min_move << endl;
            }
        }
    }
    return 0;
}

