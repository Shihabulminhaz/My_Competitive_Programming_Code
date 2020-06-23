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

    ll t,n,dif=5,arr[100000],sum = 2,cnt=0,ans,x,j,z;
    arr[0] = 2;
    for(int i=1; i<26000; i++)
    {
        sum = sum + 3;
        arr[i] = arr[i-1] + sum;
        cnt++;
        if(arr[i]>1000022000)
            break;
    }
    cin >> t;
    while(t--)
    {
        cin >> x;
        j = 0;
        for(int i=0; i<=cnt; i++)
        {
            j++;
            if(arr[i]>=x)
                break;
        }
        ans = 0;
        while(x>1)
        {
            j--;
            z = x/arr[j];
            ans = z + ans;
            x=x%arr[j];
        }
        cout << ans << endl;
    }
    return 0;
}

