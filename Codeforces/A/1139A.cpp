#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8'){
            sum+=i+1;
        }
    }
    cout << sum << endl;
    return 0;
}

