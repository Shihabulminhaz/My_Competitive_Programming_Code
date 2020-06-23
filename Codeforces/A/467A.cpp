#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int n,a,b,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(a+2<=b) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
