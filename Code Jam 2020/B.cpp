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

    int t,test,len;
    cin >> t;
    for(int l=1; l<=t; l++)
    {
        test = 0;
        string s;
        cin >> s;
        len = s.size();
        cout << "Case #" << l << ": ";
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                if(test==1)
                {
                    cout << 1;
                }
                else
                {
                    cout << "(";
                    test = 1;
                    i--;
                }
            }
            else if(s[i]=='2')
            {
                if(test==2)
                {
                    cout << 2;
                }
                else
                {
                    cout << "((";
                    test = 2;
                    i--;
                }
            }
            else
            {
                if(test==1)
                {
                    cout << ")";
                    test =0;
                    i--;
                }
                else if(test==2)
                {
                    test=1;
                    cout << ")";
                    i--;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        if(test==1)
        {
            cout << ")" << endl;
        }
        else
            cout << endl;
    }
    return 0;
}

