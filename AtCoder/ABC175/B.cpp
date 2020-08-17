#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);


int main()
{

    long long t,n,i,cnt=0,kk;
    long long x[2002];
    t = 1;
    set<long long>st;
    set<long long>::iterator it;
    while(t--)
    {
        long long ans = 0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> x[j];
        }

        sort(x,x+n);

        if(n<3)
        {
            cout << 0 << endl;
            return 0;
        }

        for(int k = 0; k<n-2; k++)
        {
            for(int l = k+1; l<n-1; l++)
            {
                for(int z=l+1; z<n; z++)
                {
                    if(x[k]!=x[l] && x[k]!=x[z] && x[l]!=x[z])
                    {
                        if(x[k]+x[l]>x[z])
                            ans++;

                       // cout << k+1 << " " << l+1 << " " << l+2 << endl;
                    }
                }
            }

        }
        cout << ans << endl;
    }

}
