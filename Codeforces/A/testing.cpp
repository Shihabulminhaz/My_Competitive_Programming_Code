#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int a,b,c,d,x,y;
        cin>>a>>b>>c>>d;
        if(b>=a)
        {
            cout<<b<<endl;
        }
        else if(c >= d)
        {
            x = c - d;
            if((a-b) % x == 0)
            {
                y = (a-b) / x;
            }
            else
            {
                y = (a-b) / x + 1;
            }


            cout<<b+c*y<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }

    return 0;
}
