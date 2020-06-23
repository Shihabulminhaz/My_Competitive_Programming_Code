#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int x=0,y=0;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='o')
            y++;
        else
            x++;
    }
    if(x*2==y)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
