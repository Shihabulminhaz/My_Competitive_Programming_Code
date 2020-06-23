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
    bool flag = true;
    int n;
    string s[1000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(flag == true && (s[i][0]=='O' && s[i][1]=='O')){
            flag = false;
            s[i][0]='+';
            s[i][1]='+';
        }
        else if(flag == true && (s[i][3]=='O' && s[i][4]=='O')){
            flag = false;
            s[i][3]='+';
            s[i][4]='+';
        }
    }

    if(flag==true) cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i=0;i<n;i++){
            cout << s[i] << endl;
        }
    }
    return 0;
}
