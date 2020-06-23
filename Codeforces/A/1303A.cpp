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
 
 
    int t,l,m,n,cnt,j,x;
    string s;
    cin >> t;
    while(t--)
    {
        m=-1,cnt=0,x=0;
        cin >> s;
        l = s.size();
 
        if(l==1)
            cout << 0 << endl;
        else if(l==2)
            cout << 0 << endl;
        else
        {
            for(int i=0; i<l; i++)
            {
                if(s[i]=='1')
                {
                    x = 1 ;
                    break;
                }
            }
            if(x==1)
            {
                for(int i =0; i<l; i++)
                {
                    if(s[i]=='1')
                    {
                        if(m==-1)
                        {
                            m = i;
                        }
                        n = i;
                    }
                }
 
                for(int j = m; j<=n; j++)
                {
                    if(s[j]=='0')
                        cnt++;
                }
                cout << cnt << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}