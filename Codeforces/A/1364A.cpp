#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int arr[100005];
vector<int>v;
int main()
{
    fast
    ll t,n,x,a;
    cin >> t;
    while(t--)
    {
        v.clear();
        ll cnt = 0;
        bool flag = false;
        ll sum = 0;
        cin >> n >> x;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%x!=0)
            {
                v.push_back(i);
                flag = true;
            }

            sum+=arr[i];
        }

        if(sum%x!=0){
            cout << n << endl;
        //    cout << "xx" << endl;
        }
        else if(flag)
        {
            ll l = v.size() - 1;
            l = v[l];
            ll r = v[0];
            ll yyy = min(r+1,n-l);
           // cout << n << " " << l << " " << n-l << " " << yyy << endl;
            cout << n - yyy << endl;
         //   cout << "x";
        }
        else
            cout << -1 << endl;

    }

    return 0;
}

