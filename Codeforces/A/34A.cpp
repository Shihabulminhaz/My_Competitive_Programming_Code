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

    int n,x,y;
    pair<int,int>arr[101];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }

    sort(arr,arr+n);
    int mn = 999999;
    for(int i=1;i<n;i++){
        if(abs(arr[i-1].first-arr[i].first)<mn){
            mn = abs(arr[i-1].first-arr[i].first);
            x = arr[i-1].second;
            y = arr[i].second;
        }
    }

    cout << x << " " << y << endl;
    return 0;
}
