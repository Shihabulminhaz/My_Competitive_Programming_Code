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

    ll n,m,q,test,px,py,ex=-99999999,ey=-99999999,r;
    cin >> n >> m >> q;
    cin >> px >> py;
    while(q--)
    {
        cin >> test;
        if(test==1)
        {
            cin >> px >> py;
            if(py==ey)
            {
                if((ex-r<= px && ex+r>=px))
                {
                    cout << "Opps! I'm dead\n";
                }
                else
                {
                    cout << "I can't be defeated\n";
                }
            }
            else if(px==ex)
            {
                if(ey-r<= py && ey+r>=py)
                {
                    cout << "Opps! I'm dead\n";
                }
                else
                {
                    cout << "I can't be defeated\n";
                }
            }
            else
            {
                cout << "I can't be defeated\n";
            }

        }
        else
        {
            cin >> ex >> ey >> r;
             if(py==ey)
            {
                if((ex-r<= px && ex+r>=px))
                {
                    cout << "Opps! I'm dead\n";
                }
                else
                {
                    cout << "I can't be defeated\n";
                }
            }
            else if(px==ex)
            {
                if(ey-r<= py && ey+r>=py)
                {
                    cout << "Opps! I'm dead\n";
                }
                else
                {
                    cout << "I can't be defeated\n";
                }
            }
            else
            {
                cout << "I can't be defeated\n";
            }
        }
    }
    return 0;
}
