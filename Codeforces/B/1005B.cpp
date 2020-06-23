#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int k,i,x=0;
    string s1,s2;
    cin >> s1 >> s2;
    k=min(s1.size(),s2.size());
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(i=0; i<k; i++)
    {
        if(s1[i]!=s2[i])
            break;
        else
            x++;
    }
    cout << s1.size()+s2.size()-x*2 << endl;
    return 0;
}

