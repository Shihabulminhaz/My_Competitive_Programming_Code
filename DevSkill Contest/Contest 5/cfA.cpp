#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 100007

int main()
{

 string s[10000],t[100];
 int n,m,q,x,z;
 long int y;
 cin >> m >> n;
 for(int i = 1;i<=m;i++){
    cin >> s[i];
 }

 for(int i = 1;i<=n;i++){
    cin >> t[i];
 }

 cin >> q;
 for(int i=0;i<q;i++){
 cin >> y;
 x = y%m;
 if(x==0) x=m;
 z = y%n;
 if(z==0) z=n;
 cout << s[x]+t[z] << endl;
 }
    return 0;
}

