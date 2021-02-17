#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x, y, z, t1, t2, t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;
	// view the image in this repository for the derivation of formula
	// total time of elevator = ((abs(x - z) * t2) + (abs(x - y) * t2) + (3 * t3)
	// total time of walking = abs(x - y) * t1
	cout << ((abs(x - z) * t2) + (abs(x - y) * t2) + (3 * t3) <= abs(x - y) * t1 ? "YES" : "NO") << '\n';
	return 0;
}