#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000007
int arr[5];
int main()
{
    ll t,n,a,b,c,d,x,y,sum=0,check=0;
    cin >> t;
    while(t--){
        cin >> a >> b>> c>>d;
        if(b>=a) cout << b << endl;
        else{
            if(c<=d) cout << -1 << endl;
            else{
                x = c - d;
            if((a-b) % x == 0)
            {
                y = (a-b) / x;
            }
            else
            {
                y = (a-b) / x + 1;
            }


            cout<<b+c*y<<endl;
            }
        }

    }

    return 0;
}

