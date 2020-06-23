#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int arr[100005],a[100005];
int main()
{
    fast
    int n,x,mx=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        arr[i] = arr[i-1] + a[i];
    }
    int y = *max_element(arr,arr+n+1);
    for(int i=1; i<=n; i++)
    {
        if(a[i]>mx)
            mx = a[i];
        if(arr[i]==y)
        {
            break;
        }
    }
    if(y<=0)
        cout << 0 << endl;
    else
        cout << y-mx << endl;
    return 0;
}

