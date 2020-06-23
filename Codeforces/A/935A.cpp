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

    int n,x=1,cnt=0;
    cin >> n;
    while(n/2>=x)
    {
        if((n-x)%x==0)
            cnt++;

        x++;
    }
    cout << cnt << endl;
    return 0;
}
