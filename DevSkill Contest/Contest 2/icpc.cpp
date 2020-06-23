#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int t,l,check,y;
    std::string s ;
    long int x;
    scanf("%ld",&t);

    for( int i=0; i<t; i++)
    {
        x = 0,y=0;
        cin >> s;
        l=s.size();
        for(long int j=0; j<l; j++)
        {
            if(s[j]=='.')
            {
                x = 1;
                check = j;
                break;
            }
        }

        if(x==1)
        {
            for(long int j=check+1; j<l; j++)
            {
                if(s[j]!='0')
                {
                    printf("N0\n");
                    y=1;
                    break;
                }
            }
            if(y==0)
            {
                if(s[check-1] =='0' || s[check-1] =='2' || s[check-1] =='4' || s[check-1] =='6' || s[check-1] =='8')
                    printf("YES\n");
                else
                    printf("N0\n");
            }
        }
        else
        {
            if(s[l-1] =='0' || s[l-1] =='2' || s[l-1] =='4' || s[l-1] =='6' || s[l-1] =='8')
                printf("YES\n");
            else
                printf("N0\n");
        }

    }

}

/// icpc.cpp this code is mock icpc 2019, E no problem .
