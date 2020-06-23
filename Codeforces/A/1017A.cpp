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

    int a,b,c,d,n,sum,roll=1;
    cin >> n;
    cin >> a >> b >> c >> d;
    sum = a+b+c+d;
    for(int i=1;i<n;i++){
        cin >> a >> b >> c >> d;
        if(a+b+c+d>sum) roll++;
    }
    cout << roll << endl;
    return 0;
}
