#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,n,arr[1005],b[1005];
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int mn=999999999;
        for(int i=1;i<n;i++){
            int b;
            b = arr[i] - arr[i-1];
            if(b<=mn) mn = b;
        }
        cout << mn << endl;
    }
    return 0;
}
