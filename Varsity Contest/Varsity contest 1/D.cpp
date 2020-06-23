#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int main()
{
    char str;
    int l,test,t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        stack<char>stk;
        test = 1;
        getline(cin,s);
        l = s.size();
        for(int i=0;i<l;i++)
        {
            if(!stk.empty() && stk.top()=='(' && s[i]==')')
            {
                stk.pop();
            }
            else if(!stk.empty() && stk.top()=='[' && s[i]==']')
            {
               stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }

        if(!stk.empty())
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}

