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

    int n,cnt=0,mx=-1,a;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a>mx)
        {
            mx = a;
            cnt = 1;
        }
        else if(mx==a)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

