#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int w,h,k,ans=0,x=0;
    cin >> w >> h >> k;
    for(int i=0; i<k; i++)
    {
        ans+=((h-2-x)+(w-2-x))*2+4;
        x+=4;
    }
    cout << ans << endl;
    return 0;
}

