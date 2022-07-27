#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto ans = int{ -1 };
	while (0 < (n--)) {
		int a, b;
		cin >> a >> b;

		if (a <= b) {
			if (ans < 0 || b < ans) {
				ans = b;
			}
		}
	}

	cout << ans;

	return 0;
}