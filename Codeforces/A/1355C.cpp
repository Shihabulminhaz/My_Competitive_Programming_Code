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
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr,arr+4);
    int cnt=0;
    for(int i=0; i<4-2; i++)
    {
        for(int j=i+1; j<4-1; j++)
        {
            if(arr[i]+arr[j]>arr[j+1])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

