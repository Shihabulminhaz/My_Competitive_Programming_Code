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

    int n,x,q,y,arr[100005];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin >> y;
        x = lower_bound(arr,arr+n,y) - arr;
        if(arr[x]==y)
            cout << "Yes " << x+1 << endl;
        else
            cout << "No " << x+1 << endl;
    }
    return 0;
}

