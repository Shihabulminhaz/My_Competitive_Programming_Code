#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);


int main()
{

    int n,i,cnt,q,x,y,t;
    long int arr[100000],A,B,ans;
    fi(t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        fli(n);
        fi(q);
        for(long int j=0; j<n; j++)
        {
            fli(arr[j]);
        }

        for(int k = 0; k<q; k++)
        {
            fli(A);
            fli(B);


            long int x = upper_bound(arr,arr+n,B) - arr;
            long int y = lower_bound(arr,arr+n,A) - arr;
            ans = x - y;
            printf("%ld\n",ans);
        }
    }

}

