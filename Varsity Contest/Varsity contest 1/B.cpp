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
    freopen("check.txt","w",stdout);
    int j=1,n,m,x,y;
    string s;
    while(true)
    {
        queue<int>PQ;
        cin >> n;
        if(n==0)
            break;
        cout << "Scenario #" << j++ << endl;
        while(n--)
        {
            cin >> m;
            for(int i=0; i<m; i++)
            {
                cin >> y;
            }
        }
        while(cin >> s)
        {
            if(s=="STOP")
                break;
            else if(s=="ENQUEUE")
            {
                cin >> x;
                PQ.push(x);
            }
            else
            {
                cout << PQ.front() << endl;
                PQ.pop();
            }
        }
    }
    return 0;
}

