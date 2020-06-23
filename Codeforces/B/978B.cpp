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

    int n,cnt=0,x=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='x')
        {
            x++;
        }
        else
        {
            if(x>2)
                cnt+=x-2;
            x=0;
        }
    }
    if(x>2)
        cnt+=x-2;
    cout << cnt << endl;
    return 0;
}
