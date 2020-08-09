/*==============================================*\
Codeforces ID:    mdshihab
                                                  |
Name:     Md. Shihabul Minhaz                     |
Study:      CSE, JKKNIU                           |
Address:  Trishal, Mymensingh, Bangladesh         |
                                                  |
 mail:   mdshihabul20171@gmail.com                |
 FB  :   fb.com/mdshihabul.minhaz.7               |
 github: Shihabulminhaz                           |
stopstalk :  mdshihab                             |
                                                  |
@uthor   Md. Shihabul Minhaz (shihab)             |
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}

int main()
{
    fast
    FI(); /// skip this line for compile
    string s;
    cin >> s;
    int a=0,b=0,c=0;
    int test_a = 0,test_b=0,test_c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') {a++; test_a=1; if(test_c || test_b){ cout << "No\n"; return 0;}}
        else if(s[i]=='b'){ b++; test_b=1; if(!test_a || test_c){ cout << "No\n"; return 0;}}
        else {c++; test_c=1; if(!test_a || !test_b){ cout << "No\n"; return 0;}}
    }
    if((c==a || c==b) && a!=0 && b!=0 && c!=0) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

