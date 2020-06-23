#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int main()
{

    ll n,sum=0;
    cin >> n;
    if(n>=1){
        for(int i=1;i<=n;i++){
            sum += i;
        }
    }
    else{
        for(int i=1;i>=n;i--){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

