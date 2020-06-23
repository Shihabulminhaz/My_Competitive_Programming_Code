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

    string s;
    while(cin >> s){
        list<char>lst;
        list<char>::iterator it;

        it = lst.end();
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                it = lst.begin();
            }
            else if(s[i]==']'){
                it = lst.end();
            }
            else{
                lst.insert(it,s[i]);
            }
        }

        for(it=lst.begin();it!=lst.end();it++){
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}
