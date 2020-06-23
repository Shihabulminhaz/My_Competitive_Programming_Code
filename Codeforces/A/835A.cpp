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

    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if(a*b+2*d>a*c+2*e){
        cout << "Second\n";
    }
    else if(a*b+2*d<a*c+2*e){
        cout << "First\n";
    }
    else{
        cout << "Friendship\n";
    }
    return 0;
}
