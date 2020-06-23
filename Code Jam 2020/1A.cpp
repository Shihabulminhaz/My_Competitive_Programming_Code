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

    int t,x,y;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> x >> y;
        if(x+y==0)
            cout << "IMPOSSIBLE\n";
        else if(x%2==0 && y%2==0)
            cout << "IMPOSSIBLE\n";
        else if(x%2==1 && y%2==1)
            cout<< "IMPOSSIBLE\n";
        else if(x==1 && y==2) cout << "EN\n";
        }
        else if(x==1 && y==-2) cout << "ES\n";
        else if(x==2 && y==1) cout << "NE\n";
        else if(x==-1 && y==2) cout << "WN\n";
        else if(x==-1 && y==-2) cout << "WS\n";
        else if(x==2 && y==-1) cout << "SE\n";
        else if(x==-2 && y==-1) cout << "SW\n";
        else if(x==1 &&)

    }
    return 0;
}

