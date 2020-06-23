#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int x[1000005];
set<int>s;
int dp(ll n,ll m)
{
    x[0] = 1;
    s.insert(x[0]);
    x[1] = 2;
    s.insert(x[1]);
    x[2] = 3;
    s.insert(x[2]);
    for(ll i=3; i<=n; i++)
    {
        x[i] = (x[i-3] + x[i-2] + x[i-1])%m + 1;
        s.insert(x[i]);
    }
}
int main()
{
    freopen("check.txt","w",stdout);
    ll N,M,K,test,j,t;
    cin >> t;
    for(int j = 1; j<=t; j++)
    {
        test = 1;
        cin >> N >> M >> K;
        dp(N,M);
     /*   for(int i=0; i<N; i++)
        {
            if(s.find(K)!=s.end())
            {
                cout << "Case " << j << ": " << "sequence nai" << endl;
               // test = 0;
                //break;
                //s
            }
            else{

                //cout << "Case " << j << ": " << i << endl;
            }
        }
        if(test==1)
            cout << "Case " << j << ": " << "sequence nai" << endl;*/
    }
   // for(int i = 0 ;i<N;i++){
        cout << x[1330] << " " << x[1331]<< " " << x[1332] << " ";
    //}
    return 0;
}

