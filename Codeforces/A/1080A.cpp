#include<bits/stdc++.h>
using namespace std;

int main()
{

    double n,k;
    cin >> n >> k;
    cout << setprecision(0) << fixed << ceil((n*2)/k) + ceil((n*5)/k) + ceil((n*8)/k) << endl;
    return 0;
}
