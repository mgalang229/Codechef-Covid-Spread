#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, d;
		cin >> n >> d;
		int infected = 1;
		for (int i = 1; i <= d; i++) {
			// within 10 days keep doubling the value
			// from the 11-th day (onwards), triple the value
			if (i <= 10) {
				infected *= 2;
			} else {
				infected *= 3;
			}
			// break the loop once the value is greater than or equal to n
			if (infected >= n) {
				break;
			}
		}		
		cout << min(infected, n) << '\n';
	}
	return 0;
}
