#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 1000007

bool isMarked[max+5];
vector<int>primes;
int Noldbach_problem[20005];

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

}



int main()
{

    int n,k,cnt=0,l;
    cin >> n >> k;
    sieve(1000);
    for(int i=1;i<=1000;i++){
        if(isMarked[i]==0) primes.push_back(i);
    }
//cout << primes[1];
    for(int i = 0; (primes[i]+primes[i+1]+1)<=1000; i++)
    {
        l = primes[i] + primes[i+1] + 1;
        Noldbach_problem[l] = 1;
    }

    for(int i = 0; primes[i] <= n; i++)
    {
        cout << primes[i] << " " << Noldbach_problem[primes[i]] << "\n";
        if(Noldbach_problem[primes[i]]==1)
        {
            cnt++;
        }
    }
        if(cnt>=k)
            cout << "YES\n";
        else
            cout << "NO\n" ;

}
