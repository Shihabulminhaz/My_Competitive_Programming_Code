#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y,z;
    cin >> x >> y >> z;

    if(x==y && z==0)
        cout << 0 << endl;
    else if(x>y+z)
        cout << "+" << endl;
    else if(y>x+z)
        cout << "-" << endl;
    else
        cout << "?" << endl;


    return 0;
}

