#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool cmp(const int &a, const int &b) {
	return b<a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int w[n];
		for(int i=0; i<n; ++i)
			cin >> w[i];
		bool ok=1;
		for(int i=0; i<n; ++i)
			if(w[i]>k) {
				cout << -1 << "\n";
				ok=0;
				break;
			}
		if(!ok)
			continue;
		int trips=0, id=0;
		while(id<n) {
			trips++;
			int sum=0;
			while(id<n&&w[id]+sum<=k)
				sum+=w[id++];
		}
		cout << trips << "\n";
	}
}
