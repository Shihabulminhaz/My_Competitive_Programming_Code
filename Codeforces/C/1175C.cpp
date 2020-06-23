#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
int arr[200005];
int main()
{

    ll t,n,k,x,mx;
    cin >> t;
    while(t--)
    {
        mx = 100000000007;
        cin >> n >> k;
        k++;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(int i=0; i<n-k+1; i++)
        {
            if(abs(arr[i]-arr[i+k-1])<mx)
            {
                mx = abs(arr[i]-arr[i+k-1]);
                x = (arr[i]+arr[i+k-1])/2;
            }
        }
        cout << x << endl;
    }
    return 0;
}

