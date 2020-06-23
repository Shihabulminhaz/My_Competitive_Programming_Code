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

    int n,x,a,sum=0;
    cin >> n >> x;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        sum += a;
    }
    if(sum>x)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

