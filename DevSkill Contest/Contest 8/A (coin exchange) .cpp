#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 7550

int n=3,bill,coins[max];

long long int dp[max][max];

long long int CoinExchange(int rem,int pos){
   if(pos>=n) return 0;
   if(rem < 0) return 0;
   if(rem == 0) return 1;

   if(dp[rem][pos] != -1) return dp[rem][pos];

   return dp[rem][pos] = CoinExchange(rem - coins[pos],pos) + CoinExchange(rem,pos+1);
}
int main()
{


    cin >> bill ;
    coins[0]=1,coins[1]=2,coins[2]=3;
    sort(coins,coins+n);
    memset(dp,-1,sizeof dp);
    cout << CoinExchange(bill,0) << endl;
    return 0;
}
