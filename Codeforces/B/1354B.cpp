#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        ll x=0,y=0,z=0,m=0,check=99999998;
        char ch='x';
        cin >> s;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
               x=i+1;
               if(x>0 && y>0 && z>0){
                 m = max(x,max(y,z)) - min(x,min(y,z)) + 1;
                 if(m<check) check = m;
                 if(m==3) break;
               }
            }
            else if(s[i]=='2')
            {
               y = i+1;
               if(x>0 && y>0 && z>0){
                 m = max(x,max(y,z)) - min(x,min(y,z)) + 1;
                 if(m<check) check = m;
                 if(m==3) break;
               }
            }
            else
            {
               z = i+1;
               if(x>0 && y>0 && z>0){
                 m = max(x,max(y,z)) - min(x,min(y,z)) + 1;
                 if(m<check) check = m;
                 if(m==3) break;
               }

            }
        }
        if(check!=99999998)
            cout << check << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}

