#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, h;
	cin >> n >> h;

	auto ans = int{ 0 };
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		if (h < a) {
			ans += 2;
		}
		else {
			ans += 1;
		}
	}

	cout << ans;

	return 0;
}