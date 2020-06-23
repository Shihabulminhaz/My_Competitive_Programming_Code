#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << ((k-1)/(n-1))+k << endl;
    }
    return 0;
}

