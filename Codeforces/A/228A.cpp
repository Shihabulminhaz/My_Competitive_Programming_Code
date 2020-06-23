#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    set<int>st;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    cout << 4 - st.size() << endl;
    return 0;
}

