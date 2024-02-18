#include<iostream>
#include<algorithm>
#include<vector>
#include<bit>

using namespace std;

int main()
{
	system("chcp 1251");
	vector<int> vt{ 6, 1, 5, 3, 5, 4, 7 };

	cout << "Изначально, v:\n";

	for (const auto& i : vt) {
		cout << i << " ";
	}
	cout << "\n";

	cout << "После создания кучи, vt:\n";
	cout << endl;
	if (!is_heap(vt.begin(), vt.end())) {
		cout << "создание кучи...\n";
		make_heap(vt.begin(), vt.end());

	}
	for (auto t{ 1U }; const auto & i:vt) {
		cout << i << (has_single_bit(++t) ? " | " : " ");
	}
	cout << endl;
	return 0;
}