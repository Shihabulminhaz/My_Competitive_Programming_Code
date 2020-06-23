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
    int t,n,a,jor,bijor,m;
    cin >> t;
    while(t--)
    {
        jor = bijor = 0;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(a%2==1)
                bijor++;
            else
                jor++;
        }
        if(m!=bijor)
        {
            if(bijor%2==0)
            {
                bijor--;
                m=m-bijor;
                if(jor>=m)
                {
                    cout << "Yes\n";
                }
                else
                    cout << "No\n";
            }
            else
            {
                m -= bijor;
                if(jor>=m)
                {
                    cout << "Yes\n";
                }
                else
                    cout << "No\n";
            }

        }
        else
        {
            if(m%2==0)
                cout << "No\n";
            else
                cout << "Yes\n";
        }

    }
    return 0;
}

