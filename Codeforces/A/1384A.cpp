#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0,x=0,y=0;
        string s1,s2;
        cin>>n>>s1>>s2;
        for(i=0; i<n; i++)
        {
            if(s1[i] > s2[i])
            {
                x = -1;
                break;
            }
            else if(s1[i] == s2[i])
            {
                x++;
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(i=1; i<n; i++)
        {
            if(s2[i] != s2[i-1])
            {
                y++;
            }
        }
        for(i=1; i<n; i++)
        {
            if(s1[i] != s1[i-1])
            {
                c++;
            }
        }
        if(c < y)
        {
            c = y;
        }

        if(x == -1)
        {
           cout<<x<<endl;
        }
        else
        {
            cout<<c-x+1<<endl;
        }

    }

    return 0;
}
