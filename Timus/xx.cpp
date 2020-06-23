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

    int n,f=1,mod,cnt;
    string s;
    cin >> n;
    cin >> s;
    cnt = s.size();
    if(n%cnt!=0)
    {
        mod = n%cnt;
        while(n>=mod)
        {
            f = f*n;
            n=n-cnt;
        }
    }
    else
    {
        mod = n%cnt;
        while(n>=cnt)
        {
            f = f*n;
            n=n-cnt;
        }
    }
    cout << f << endl;
    return 0;
}

