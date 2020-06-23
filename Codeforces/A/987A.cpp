#include<bits/stdc++.h>
using namespace std;

string s1[6]= {"Power","Time","Space","Soul","Reality","Mind"},s2;
int x[6];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s2;
        if(s2=="purple")
            x[0] = 1;
        else if(s2=="green")
            x[1] = 1;
        else if(s2=="blue")
            x[2] = 1;
        else if(s2=="orange")
            x[3] = 1;
        else if(s2=="red")
            x[4] = 1;
        else
            x[5] = 1;
    }
    cout << 6-n << endl;
    for(int i=0; i<6; i++)
    {
        if(!x[i])
            cout << s1[i] << endl;
    }

    return 0;
}

