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

    int n,arr[]={1,2,3,4,5},ans=0;
    cin >> n;
    int i=4;
    while(n>0){
        ans += n/arr[i];
        n=n%arr[i];
        i--;
    }
    cout << ans << endl;
    return 0;
}

