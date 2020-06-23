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
    int n,arr[100],m,brr[100];
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];
    cin >> m;
    for(int i=0;i<m;i++) cin >> brr[i];
    n = *max_element(arr,arr+n);
    m = *max_element(brr,brr+m);
    cout << n << " " << m << endl;
    return 0;
}
