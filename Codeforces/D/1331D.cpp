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
    cin >> s;
    if((s[s.size()-1]-'0')%2==0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}
