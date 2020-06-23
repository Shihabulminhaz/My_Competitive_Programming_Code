#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,n;
    string s;
    cin >> t;
    while(t--)
    {
        string s2="";
        cin >> s;
        cout << s[0];
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=s[i+1])
            {
                s2.push_back(s[i+1]);
            }
            else
            {
                s2.push_back(s[i+1]);
            }
        }
        cout << s2 << endl;
    }
    return 0;
}
