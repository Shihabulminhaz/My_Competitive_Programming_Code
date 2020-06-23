
#include<bits/stdc++.h>
using namespace std;


void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}

void rightrotate(string &s, int d)
{
    leftrotate(s, s.length()-d);
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string str1,s;
        cin >> str1;

        string str2;
        cin >> str2;

        if(str1==str2)
        {
            cout << 0 << endl;
            continue;
        }
        s = str2;
        int i = 0,test=0;
        while(i!=n)
        {
            leftrotate(str2, 1);
            if(str2==str1)
            {
                cout << i+1 << endl;
                test = 1;
                break;
            }
            rightrotate(s, 1);
            if(s==str1)
            {
                cout << i+1 << endl;
                test = 1;
                break;
            }
            i++;
        }
        if(!test)
            cout << -1 << endl;
    }
    return 0;
}
