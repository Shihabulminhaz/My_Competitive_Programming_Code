#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,a,b,c,d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(max(a,b)!=max(c,d))
            cout << "No\n";
        else if(max(a,b)==min(a,b)+min(c,d))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

