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
    int n,k;
    cin >> n >> k;
    while(k--)
    {
        if(n%10==0)
            n/=10;
        else
            n--;
    }
    cout << n << endl;

    return 0;
}
