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

    int n,k,arr[1001],ans=0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr,arr+n);

    for(int i=0; i<k; i++)
    {
        if(arr[i]<=0)
            ans-=arr[i];
    }

    cout << ans << endl;
    return 0;
}
