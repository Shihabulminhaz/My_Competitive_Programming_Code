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

    int n,x=0,y=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            x++;
        else
            y++;
    }

    if(x>y)
        cout << "Anton\n";
    else if(x<y)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
    return 0;
}
