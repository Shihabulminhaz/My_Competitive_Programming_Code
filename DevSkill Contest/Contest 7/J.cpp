#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000000007
vector<ll>ugly;
map<ll,int>dp;

void gen(ll N){

   if(N>max) return;

   if(dp[N]==1) return;

   dp[N] = 1;

   ugly.push_back(N);

   gen(2*N);
   gen(3*N);
   gen(5*N);

}
int main()
{

    gen(1);
    sort(ugly.begin(),ugly.end());

    cout << "The 1500'th ugly number is " << ugly[1499] << "." << endl;
    return 0;
}

