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

    int n,m,a,b;
    string s;
    char c1,c2;

    cin >> n >> m;
    cin >> s;

    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        cin >> c1 >> c2;
        for(int j=a-1; j<b; j++)
        {
            if(s[j]==c1)
                s[j] = c2;
        }
    }
    cout << s << endl;
    return 0;
}

