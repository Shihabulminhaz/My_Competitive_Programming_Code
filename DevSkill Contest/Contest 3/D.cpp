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
    int t,i=1;
    long long int a[5];
    cin >> t;
    while(t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if((a[0]+a[1])>a[2])
        {
            if((a[0]==a[1]) && (a[1]==a[2]))
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a[0]==a[1] || a[0]==a[2] || a[1]==a[2])
            {
                printf("Case %d: Isosceles\n",i);
            }
            else
            {
                printf("Case %d: Scalene\n",i);
            }
        }
        else
        {
            printf("Case %d: Invalid\n",i);
        }
        i++;
    }
    return 0;
}

