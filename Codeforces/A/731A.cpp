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

    int sum = 0;
    string s ;
    char x='a';
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
    sum += min(abs(s[i]-x),26-abs(s[i]-x));
    x = s[i];
    }
    cout << sum << endl;
    return 0;
}
