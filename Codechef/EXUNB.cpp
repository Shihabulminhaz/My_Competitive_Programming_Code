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

    int t,n,x,y,sum;
    string s;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        sum = (n*(n-1))/2;
        if(sum%n!=0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i=0; i<n; i++)
            {
                s = "";
                for(int j=0; j<n; j++)
                {
                    s += "0";
                }
                for(int j = 1; j<=sum/n; j++)
                {
                    s[(i+j)%n]='1';
                }
                cout << s << endl;
            }
        }
    }
    return 0;
}
