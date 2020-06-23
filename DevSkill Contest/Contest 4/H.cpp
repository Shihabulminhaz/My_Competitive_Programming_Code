#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 100000
#define all(a) a.begin(),a.end()

bool isComp[max+5];
vector<int>primes;

vector<ll>divisors[5000];

void sieve(){
   for(int i=2;i*i<=max;i++){
    if(isComp[i]==0){
        for(int j=i*i;j<=max;j+=i){
            isComp[j] = 1;
        }
    }
   }

   for(int i = 2;i<=max;i++){
    if(isComp[i]==0) primes.push_back(i);
   }

   for(int num = 1;num<=max;num++){
    int nod = 1;
    int N = num;
    for(int j=0;j<primes.size() && primes[j]*primes[j] <=N;j++){
        if(N%primes[j]==0){
            int alpha = 0;
            while(N%primes[j]==0){
                N/=primes[j];
                alpha++;
            }
            nod *=(2*alpha+1);
        }
    }
    if(N>1) nod*= 3;

    divisors[nod].push_back(1LL * num * num);
   }
}

int main()
{

   sieve();
   int t;
   scanf("%d",&t);
   while(t--){
    ll low,high,k;
    scanf("%lld%lld%lld",&k,&low,&high);
    printf("%d\n",upper_bound(all(divisors[k]),high) - lower_bound(all(divisors[k]),low));
   }

    return 0;
}

//divisors[k].begin(),divisors[k].end()
