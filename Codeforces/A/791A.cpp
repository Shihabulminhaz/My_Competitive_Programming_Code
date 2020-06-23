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
    int a,b,cnt=0;
    cin >> a >> b;
    while(true)
    {
        a*=3;
        b*=2;
        cnt++;
        if(a>b)
            break;
    }
    cout << cnt << endl;

    return 0;
}
