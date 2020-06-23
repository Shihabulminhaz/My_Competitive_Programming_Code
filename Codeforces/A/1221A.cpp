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
    double cl = clock();
    int t,n,a,sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(a<=2048)
                sum+=a;
        }
        if(sum>=2048)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    cl = clock() - cl;
    fprintf(stderr, "Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}

