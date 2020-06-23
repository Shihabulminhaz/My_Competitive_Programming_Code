#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int divcount(int n){
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n) sum+=i;
        else if(n%i==0){
            sum+=i;
            sum+=(n/i);
        }
    }
    return sum-n;
}

int main()
{
    fast
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << divcount(n) << endl;
    }
    return 0;
}

