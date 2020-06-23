#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a<b){
            swap(a,b);
        }
        if(a<=2*b) cout << 2*b*2*b << endl;
        else cout << a*a << endl;

    }
    return 0;
}

