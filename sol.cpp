#include <bits/stdc++.h>

using namespace std;

long long Power(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1) {
			res *= a;
		}
		a *= a;
		b >>= 1;
	}         
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, d;
		cin >> n >> d;
		// 2 ^ 26 = 1e8 (the max value of n is 1e8 so there's no need to continue if d is greater than or equal to 26)
		if (d == 26) {
			cout << n << '\n';
			continue;
		}
		long long ans = Power(1LL * 2, min(d, 1LL * 10));
		// subtract 10 from d because the value will triple after the 10-th day
		d -= 10;
		// if ans is already greater than n or d is greater than 0 after subtracting 10, then n itself is the answer
		if (ans >= n) {
			cout << n << '\n';
			continue;
		}
		if (ans >= n && d > 0) {
			cout << n << '\n';
			continue;
		}
		// 3 ^ 16 = 1e8 (the max value if n is 1e8 so there's no need to continue if d is greater than or equal to 16)
		if (d >= 16) {
			cout << n << '\n';
			continue;
    }
    ans *= Power(3, d);
    cout << min(ans, n) << '\n';
	}
	return 0;
}