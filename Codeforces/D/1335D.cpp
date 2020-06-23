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
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        for(int i=0; i<9; i++)
        {
            cin >> s;
            for(int j=0; j<9; j++)
            {
                if(s[j]=='1')
                    cout << '2';
                else
                    cout << s[j];
            }
            cout << endl;
        }
    }

    return 0;
}
