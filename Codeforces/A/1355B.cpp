#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int arr[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,a;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);

        for(int i=2;i<=n;i++){
            if(sum%i==0){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}

