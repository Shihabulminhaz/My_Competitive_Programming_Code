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
    long int a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a>b)
            swap(a,b);
 
        if((a+b)%3==0 && a*2>=b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}