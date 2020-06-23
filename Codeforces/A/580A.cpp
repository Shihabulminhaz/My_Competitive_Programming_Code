#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long

int main()
{

    int n,x,mx=1,cnt=1,f;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(i==0)
            f = x;
        else
        {
            if(f<=x)
                cnt++;
            else
            {
                mx = max(mx,cnt);
                cnt = 1;
            }
            f = x;
        }
    }

    cout << max(mx,cnt) << endl;
    return 0;
}

