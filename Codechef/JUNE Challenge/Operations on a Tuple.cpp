#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    ll t,a,b,c,p,q,r;
    cin >> t;
    while(t--)
    {
        ll xx,yy,zz,l,m,n,test=1;
        cin >> p >> q >> r >> a >> b >> c;
        ll x = a - p;
        ll y = b - q;
        ll z = c - r;

        if(p==0)
        {
            test = 0;
             xx = 0;
             l=0;
        }
        else
        {
             xx = a/p;
             l = a%p;
        }
        if(q==0)
        {
            test = 0;
             yy = 0;
             m=0;
        }
        else
        {
             yy = b/q;
             m = b%q;
        }
        if(r==0)
        {
            test = 0;
             zz = 0;
              n=0;
        }
        else
        {
             zz = c/r;
             n = c%r;
        }



        int xxx = x - y;
        int yyy = y-z;
        int zzz = z-x;

        if(x==0 && y==0 && z==0)
            cout << 0 << endl;
        else if((x==0 && y==0) || (y==0 && z==0) || (z==0 && x==0))
            cout << 1 << endl;
        else if(x==0 || y==0 || z==0)
        {
            if(x==0 && (y==z))
                cout << 1 << endl;
            else if(y==0 && (x==z))
                cout << 1 << endl;
            else if(z==0 && (y==x))
                cout << 1 << endl;
            else if(x==0 && m==0 && n==0)
            {
                if(yy==zz)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else if(y==0 && l==0 && n==0)
            {
                if(xx==zz)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else if(z==0 && l==0 && m==0)
            {
                if(xx==yy)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else
                cout << 2 << endl;
        }
        else
        {
            if(x==y && y==z)
                cout << 1 << endl;
            else if(l==0 && m==0 && n==0 && test==1)
            {
                if(xx==yy && yy==zz)
                    cout << 1 << endl;
            }
            else if(x==y || y==z || z==x)
                cout << 2 << endl;
            //  else if((a*q==p*b) || (a*r==p*c) || (b*r==c*q))
            //    cout << 2 << endl;
            /* else if(l==0 || m==0 || n==0)
             {
                 if(l==0)
                 {
                     ll xx = a/p;
                     if(xx<=p)
                         cout << 3 << endl;
                     else
                     {
                         xx = xx - p;
                         ll ccc = 1;
                         if(b%(q+xx)!=0)
                         {
                             cout << 3 << endl;
                             ccc=0;
                         }
                         if(ccc==1 && c%(r+xx)!=0)
                             cout << 3 << endl;
                         if(ccc==1)
                             cout << 2 << endl;
                     }
                 }
                 else if(m==0)
                 {
                     ll xx = b/q;
                     if(xx<=q)
                         cout << 3 << endl;
                     else
                     {
                         xx = xx - q;
                         int ccc = 1;
                         if(a%(p+xx)!=0)
                         {
                             cout << 3 << endl;
                             ccc=0;
                         }
                         if(ccc==1 && c%(r+xx)!=0)
                             cout << 3 << endl;
                         if(ccc==1)
                             cout << 2 << endl;
                     }
                 }
                 else
                 {
                     ll xx = c/r;
                     if(xx<=r)
                         cout << 3 << endl;
                     else
                     {
                         xx = xx - r;
                         int ccc = 1;
                         if(a%(p+xx)!=0)
                         {
                             cout << 3 << endl;
                             ccc=0;
                         }
                         if(ccc==1 && b%(q+xx)!=0)
                             cout << 3 << endl;
                         if(ccc==1)
                             cout << 2 << endl;
                     }
                 }
             }*/

            else
                cout << 3 << endl;
        }
    }
    return 0;
}
