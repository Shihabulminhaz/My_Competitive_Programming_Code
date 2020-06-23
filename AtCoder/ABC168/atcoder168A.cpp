#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int n;
    cin >> n;
    n=n%10;
    if(n==2 || n==4 || n==5 || n==7 || n==9) cout << "hon\n";
    else if(n==3) cout << "bon\n";
    else cout << "pon\n";
    return 0;
}

