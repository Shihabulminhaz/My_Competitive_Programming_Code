#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    string s[101];
    bool flag = false;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        for(int j=0; j<i; j++)
        {
            if(s[j]==s[i])
            {
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";

        flag = false;
    }
    return 0;
}

