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
    int cnt=0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
            cnt++;
    }
    if((s.size()+1)/2<cnt)
        cout << s.size() << endl;
    else
        cout << cnt*2-1 << endl;

    return 0;
}
