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

    int t,x,cnt_even=0,cnt_odd=0,even,odd;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> x;
        if(x&1)
        {
            odd = i;
            cnt_odd++;
        }
        else
        {
            even = i;
            cnt_even++;
        }
    }
    if(cnt_odd==1)
        cout << odd << endl;
    else
        cout << even << endl;
    return 0;
}

