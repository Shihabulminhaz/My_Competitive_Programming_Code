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

    int n,a,b,x=0,y=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(a>b)
            x++;
        else if(a<b)
            y++;
    }
    if(x>y)
        cout << "Mishka\n";
    else if(x<y)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";
    return 0;
}
