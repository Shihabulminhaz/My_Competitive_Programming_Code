#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n,x,y,ax=0,ay=0,bx=0,by=0;
    cin >> t;
    while(t--)
    {
        cin >> n >> x >> y;
        if(n==1)
        {
            ax+=x;
            ay+=10;
        }
        else
        {
            bx+=x;
            by+=10;
        }
    }
    if(ax>=ay/2)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";

    if(bx>=by/2)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";
    return 0;
}

