#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<string>vec;
    long long int n,y,m,z;
    string x;
    cin >> n;
    for(long long int i=0;i<n;i++){
        cin >> x;
        vec.push_back(x);
    }
    cin >> m;
    cin >> y >> z;
    vec.erase(vec.begin()+m-1);
    vec.erase(vec.begin()+y-1,vec.begin()+z-1);
    cout << vec.size() << endl;
    for(long long int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    return 0;
}

