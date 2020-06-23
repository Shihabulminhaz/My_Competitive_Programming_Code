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

    int n,x,cnt=1,check;
    cin >> n;
    cin >> check;
    for(int i=0; i<n-1; i++)
    {
        cin >> x;
        if(check!=x)
        {
            cnt++;
            check = x;
        }
    }
    cout << cnt << endl;
    return 0;
}
