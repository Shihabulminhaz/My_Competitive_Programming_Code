#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    long long n;
    long double a,b;
    cin >> a >> b;
    ll x = b*100+0.01;
    n = (a*x)/100;

    cout << n << endl;
    return 0;
}
