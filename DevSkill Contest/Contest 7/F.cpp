#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int num[10006];

int main()
{
    int n,q,y,ans,t=1;
    while(true)
    {
        cin >> n >> q;
        if(n==0 && q==0)
            break;
        else
        {

            cout << "CASE# " << t++ << ":" << endl ;
            for(int i=0; i<n; i++)
            {
                cin >> num[i];
            }

            sort(num,num+n);

            for(int i=1; i<=q; i++)
            {
                cin >> y;
                ans = lower_bound(num,num+n,y) - num;
                if(num[ans]==y)
                    cout << y << " found at " << ans+1 << endl;
                else
                {
                    cout << y << " not found" << endl;
                }
            }
        }
    }
    return 0;
}

