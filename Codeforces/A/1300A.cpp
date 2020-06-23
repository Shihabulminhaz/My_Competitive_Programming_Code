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

    int t,n,x,sum,cnt;
    cin >> t;
    while(t--)
    {
        sum = 0,cnt = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(x==0)
            {
                x = 1;
                cnt++;
            }
            sum+=x;
        }
        if(sum==0)
            cout << cnt+1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}

