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
 
    double n,d,t,x,y,z,test;
    cin >> t;
    while(t--)
    {
        test = 0;
        cin >> n >> d;
        if(n>=d)
            cout << "YES\n";
        else
        {
 
            x = 1 + ceil(d/2);
 
            y = 2+ceil(d/3);
 
            if(n>=x)
            {
                cout << "YES\n";
 
            }
            else if(n>=y)
            {
                cout << "YES\n";
 
            }
            else
            {
 
                for(int i = 3; i*i<=d; i++)
                {
                    z = i + ceil(d/(i+1));
                    if(n>=z)
                    {
                        cout << "YES\n";
                        test=1;
                        break;
                    }
                }
                if(test==0)
                {
                    cout << "NO\n";
                }
            }
 
        }
    }
 
    return 0;
}