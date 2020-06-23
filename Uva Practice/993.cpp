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

    int t,n;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> n;
        if(n<10)
            cout << n << endl;
        else
        {
            for(int i = 9; i>=2; i--)
            {
                if(n%i==0)
                {
                    while(n%i==0)
                    {
                        n/=i;
                        s +='0'+i;
                    }
                }
            }
            if(n>1)
                cout << -1 << endl;
            else
            {
                reverse(s.begin(),s.end());
                cout << s << endl;

            }
        }
    }
    return 0;
}
