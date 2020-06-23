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

    int n,arr[11][11];
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        arr[1][i] = 1;
        arr[i][1] = 1;
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=n; j++)
        {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    cout << arr[n][n] << endl;
    return 0;
}
