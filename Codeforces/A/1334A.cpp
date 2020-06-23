#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int p = 0, c = 0;
		bool flag = true;
		for(int i=0;i<n;i++){
			int x, y;
			scanf("%d%d", &x, &y);
			if (x < p || y < c || y - c > x - p)
				flag = false;
			p = x, c = y;
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

