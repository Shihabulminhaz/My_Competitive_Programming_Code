
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

    int t,sum=0;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(s=="Tetrahedron")
            sum += 4;
        else if(s=="Cube")
            sum += 6;
        else if(s=="Octahedron")
            sum += 8;
        else if(s=="Dodecahedron")
            sum += 12;
        else if(s=="Icosahedron")
            sum += 20;
    }
    cout << sum << endl;
    return 0;
}
