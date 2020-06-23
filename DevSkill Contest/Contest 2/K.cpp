#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);

int main()
{

    vector<long int>arr;
    long int x,y,z;
    int n,q,i,j;
    fi(n);
    for(i=0; i<n; i++)
    {
        fli(x);
        arr.push_back(x);
    }

    fi(q);
    for(i=0; i<q; i++)
    {
        fli(x);
        if(arr[0]>=x)
            printf("X ");
        else
        {
            y = lower_bound(arr.begin()+1,arr.end(),x) - arr.begin();
            printf("%ld ",arr[y-1]);
        }

        if(arr[n-1]<=x)
            printf("X\n");
        else
        {
            z = upper_bound(arr.begin()+1,arr.end(),x) - arr.begin();
            printf("%ld\n",arr[z]);
        }
    }

}
