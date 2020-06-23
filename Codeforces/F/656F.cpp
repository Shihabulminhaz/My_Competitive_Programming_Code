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

    string s;
    int cnt = 0;
    cin >> s;
    for(int i=0; i<7; i++)
    {
        if(s[i]=='A')
            cnt++;
        else if(s[i]=='1')
            cnt+=10;
        else
            cnt+= s[i] - '0';
    }
    cout << cnt << endl;
    return 0;
}
