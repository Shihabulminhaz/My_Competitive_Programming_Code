#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,arr[3],cnt=0,a,x;
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    int i=0;
    x = n;
    while(n>0)
    {
        a=n/arr[i];
        n%=arr[i];
        while(n>0 && i<2)
        {
            n+=arr[i];
            a--;
            if(n>=arr[i+1])
                break;
        }
        cnt+=a;
        i++;

        if(i==3) break;
    }

    if(n>0)
    {
        if(x%arr[0]==0)
        {
            cout << x/arr[0] << endl;
            return 0;
        }
        if(x%arr[1]==0)
        {
            cout << x/arr[1] << endl;
            return 0;
        }
        if(x%arr[2]==0)
        {
            cout << x/arr[2] << endl;
            return 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
