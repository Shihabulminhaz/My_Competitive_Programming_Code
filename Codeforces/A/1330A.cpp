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
    int n,x,m,cnt,t,j,i,test;
    cin >> t;
    while(t--)
    {
        set<int>st;
        cnt=0;
        cin >> n >> x;
        for(int i=0; i<n; i++)
        {
            cin >> m;
            st.insert(m);
        }

        for(int i=1; i<=210; i++)
        {
            if(st.find(i)==st.end())
            {
                st.insert(i);
                x--;
                if(x==0)
                    break;
            }
        }
        for(int i=1; i<=210; i++)
        {
            if(st.find(i)==st.end())
            {
                    break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

