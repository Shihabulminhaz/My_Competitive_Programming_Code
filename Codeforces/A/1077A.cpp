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

    ll t,a,b,k;
    cin >> t;
    while(t--){
        cin >> a >> b >> k;
        if(k%2==0){
            cout << (a-b)*k/2 << endl;
        }
        else{
            cout << a*((k/2)+1) - b*(k/2) << endl;
        }
    }
    return 0;
}

