#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main()
{
    int t,testingok;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        string str;
        cin>>str;
        string ss = "";
        for(int i = 0; i<str.length();)
        {
            if(str.substr(i,3).compare("110")==0)
            {
                str.erase(str.begin()+i);
                i = 0;
            }
            else if(str.substr(i,3).compare("100")==0)
            {
                str.erase(str.begin()+i+1);
                i = 0;
            }
            else if(str.substr(i,2).compare("10")==0)
            {
                bool ok = false;
                for(int j = i+2; j<str.length(); j++)
                {
                    if(str[j]=='0')
                    {
                        ok = true;
                        break;
                    }
                }
                if(ok)
                    str.erase(str.begin()+i+1);
                else
                    str.erase(str.begin()+i);
                i = 0;
            }
            else
                i++;
        }
        cout<<str<<"\n";
    }

    return 0;
}
