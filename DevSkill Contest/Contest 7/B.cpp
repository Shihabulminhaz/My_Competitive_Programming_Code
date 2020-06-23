#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

void Quicksort(ll *arr,ll low,ll high,int cnt)
{

    ll pvt = arr[(low+high)/2];
    ll L = low;
    ll R = high;

    while(L<=R)
    {

        while(arr[L] < pvt)
            L++;
        while(arr[R] > pvt)
            R--;
        if(L <= R)
        {
            swap(arr[L],arr[R]);
            L++;
            R--;
            cnt++;
            cout << cnt << " ";
        }
    }
cout << "\n";
    if(low<R)
        Quicksort(arr,low,R,cnt);

cout << "..." << endl;
    if(L<high)
        Quicksort(arr,L,high,cnt);
}


int main()
{

    ll n,arr[100];
    cin >> n;
    for(ll i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    Quicksort(arr,0,n-1,0);
    for(ll i = 0; i<n; i++)
    {
     //   cout << arr[i] << " ";
    }
//    cout << cnt;
    return 0;
}

