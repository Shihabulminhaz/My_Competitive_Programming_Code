#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    set<char>st;
    string s;
    getline(cin,s);
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            st.insert(s[i]);
    }
    cout << st.size() << endl;
    return 0;
}

