#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}

int main()
{
    fast
    FI(); /// skip this line for compile
    int n,m,a,x=0,y=0,x1=0,y1=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a%2==1) x++;
        else y++;
    }

    for(int i=0;i<m;i++){
        cin >> a;
        if(a%2==1) x1++;
        else y1++;
    }

    cout << min(x,y1)+min(x1,y) << endl;
    return 0;
}

