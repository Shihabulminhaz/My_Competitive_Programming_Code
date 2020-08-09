#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    if(N%2) cout << "Weird\n";
    else{
        if((N>=2 && N<=5) || N>20) cout << "Not Weird\n";
        else cout << "Weird\n";
    }

    return 0;
}

