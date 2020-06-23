#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a!=1 && b!=1 && c!=1)
        cout << a*b*c << endl;
    else if(a==1 && b==1 && c==1)
    {
        cout << 3 << endl;
    }
    else if(a==1 && c ==1)
        cout << a+b+c << endl;
    else
    {
        cout << max((a+b)*c,a*(b+c)) << endl;
    }

    return 0;
}

