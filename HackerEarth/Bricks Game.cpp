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

    int n,i;
    string ans = "Patlu";
    cin >> n;
    i=1;
    while(n>0)
    {
        if(n>0)
        {
            n-=i;
            ans="Patlu";
        }
        if(n>0)
        {
            n-=i*2;
            ans="Motu";
        }

        i++;
    }
    cout << ans << endl;
    return 0;
}

