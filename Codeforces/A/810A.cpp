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

    double n,m,x,sum=0,i=0,n1,check;
    cin >> n >> m;
    n1 = m - 0.5;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        sum+=x;
    }
    while(true)
    {
        check = sum/(n+i);
        if(check>=n1)
            break;

        sum+=m;
        i++;
    }
    cout << i << endl;
    return 0;
}
