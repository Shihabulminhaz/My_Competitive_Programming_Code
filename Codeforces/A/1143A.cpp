#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x,y,z;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> z;
        if(z)
            x = i;
        else
            y = i;
    }
    cout << min(x,y) << endl;
    return 0;
}
