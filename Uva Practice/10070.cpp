#include<iostream>
using namespace std;

int StringMod(string str,int number)
{
    int l,mod,i,a;
    l = str.size();
    mod = str[0] - '0';
    for(i=0; i<l-1; i++)
    {
        a = mod * 10 + (str[i+1] - '0');
        mod = a%number;
    }
    if(mod==0)
        return 0;
    else
        return 1;
}

int main()
{
    string s;
    int presentation=1;
    while(cin >> s)
    {
        if(presentation==0)
            cout << "\n";

        presentation = 0;
        if((StringMod(s,4)==0 && StringMod(s,100)==1) || StringMod(s,400)==0)
        {
            cout << "This is leap year.\n";
            if(StringMod(s,15)==0)
            {
                cout << "This is huluculu festival year.\n";
            }
            if(StringMod(s,55)==0)
            {
                cout << "This is bulukulu festival year.\n";

            }
        }
        else if(StringMod(s,15)==0)
        {
            cout << "This is huluculu festival year.\n";
        }
        else
        {
            cout << "This is an ordinary year.\n";
        }
    }
}
