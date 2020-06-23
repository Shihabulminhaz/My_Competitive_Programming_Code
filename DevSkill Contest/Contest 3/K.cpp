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

    int a[4];
    while(true)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        if(a[0]==0 || a[1]==0 || a[2]== 0)
            break;
        else
        {
            sort(a,a+3);
            if(a[2]*a[2]==(a[1]*a[1]+a[0]*a[0]))
                printf("right\n");
            else
                printf("wrong\n");
        }
    }

    return 0;
}

