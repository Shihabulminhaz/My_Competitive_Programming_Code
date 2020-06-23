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
  int n,l=0;
  pair<string, int>arr[100005];
  unordered_map<string, int>mp;
  cin >> n;
   while(n--){
        cin >> s;
        mp.insert(s);
        if(mp.size()!=l){
            cout << "OK\n";
        }
        else{
            cout << s << 1 << endl;
        }
        l = mp.size();
    }
    return 0;
}

