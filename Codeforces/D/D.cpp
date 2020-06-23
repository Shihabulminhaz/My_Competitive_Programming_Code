#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,a,b;
    cin >> t;
    while(t--)
    {
        int test = 0;
        cin >> a >> b;
        if(b==1)
            cout << a << endl;
        else if(a<=b)
            cout << 1 << endl;
        else
        {
            int ans = 2000000000;
            for(int i=1;i*i<=a;i++){
                if(a%i==0){
                    if(i<=b){
                        ans = min(a/i,ans);
                    }
                    if(a/i<=b){
                        ans = min(i,ans);
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
