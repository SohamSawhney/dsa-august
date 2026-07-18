

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n, q;
	cin >> n >> q;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> diff(n + 1, 0);
	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;
        l--;
        r--;
		diff[l] += x;
		diff[r + 1] -= x;
	}

}