#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int arr[11],b[11];
int main()
{

    int n,m,x;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> x;
        b[x] = 1;
    }

    for(int i=0; i<n; i++)
    {
        if(b[arr[i]])
                cout << arr[i] << " ";
    }
cout << endl;
return 0;
}
