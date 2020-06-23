#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    unsigned long long n,x=1000000000000000000,arr[100005],ans=1,zero=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            zero = 1;
    }
    if(zero)
        cout << 0 << endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            x/=arr[i];
            if(x==0)
                break;
            ans*=arr[i];
        }
        if(x>0)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

