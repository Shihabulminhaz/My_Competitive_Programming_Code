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

    ll p,n,y,k=1;
    char x;
    while(true)
    {
        deque<ll>DQ;
        cin >> p >> n;
        if(p==0 && n==0)
            break;
        else
        {
            cout << "Case " << k++ << ":" << endl;
            for(int i=1; i<=p && i<=1000; i++)
            {
                DQ.push_back(i);
            }
            for(int i=0; i<n; i++)
            {
                cin >> x;
                if(x=='N')
                {
                    cout << DQ.front() << endl;
                    DQ.push_back(DQ.front());
                    DQ.pop_front();
                }
                else
                {
                    cin >> y;
                    for(auto i=DQ.begin(); i!=DQ.end(); i++)
                    {
                        if(*i==y)
                        {
                            DQ.erase(i);
                            break;
                        }
                    }
                    DQ.push_front(y);
                }
            }
        }
    }
    return 0;
}
