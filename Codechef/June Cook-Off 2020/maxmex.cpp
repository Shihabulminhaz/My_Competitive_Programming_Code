#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int arr[100005];
int main()
{
    fast
    int t,n,m,mx,a;
    cin >> t;
    while(t--)
    {
        mx = 0;
        bool flag = false;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(a>mx)
                mx = a;
            arr[a] = 1;
        }
        //sort(arr,arr+n);
        for(int i=1; i<=mx; i++)
        {
            if(arr[i]==0)
            {
                cout << i << endl;
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

