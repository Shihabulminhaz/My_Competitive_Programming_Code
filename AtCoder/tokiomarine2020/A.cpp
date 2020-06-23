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
    bool flag = false;
    fast
    long long a,v,b,w,t,x,y,xx,yy;
    cin >> a >> v >> b >> w >> t;
    // x = (a-b) + (v-w)*t;
    if(b>a)
    {
        x = a + v*t;
        y = b + w*t;

        // cout << x << endl;

        if(x>0 || 0<y)
        {
            if(x>=y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if(x<=y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    else
    {
        x = a - v*t;
        y = b - w*t;

        if(x>0 || 0<y)
        {
            if(x>=y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if(x<=y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    /*  if(a>-1)
      {
          if(x>=y)
              cout << "YES\n";
          else
              cout << "NO\n";
      }
      else
      {
          if(yy>=xx)
              cout << "YES\n";
          else
              cout << "NO\n";
      }*/

    return 0;
}
