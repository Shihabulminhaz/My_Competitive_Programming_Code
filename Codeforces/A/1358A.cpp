#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    double t,n,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        double x = (a*b)/2;
        int y = x;
        if(x==y) cout << y << endl;
        else cout << y+1 << endl;

    }
    return 0;
}

