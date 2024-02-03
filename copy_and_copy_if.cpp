#include<iostream>
#include<numeric>
#include<functional>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main() {

	vector<int> num(10);

	iota(num.begin(), num.end(), 0);

	vector<int>num_2;

	copy(num.begin(), num.end(), back_inserter(num_2));

	copy(num_2.begin(), num_2.end(), ostream_iterator<int>(cout, " "));///0 1 2 3 4 5 6 7 8 9

	cout << endl;

	copy_if(num_2.begin(), num_2.end(), ostream_iterator<int>(cout, " "), [](int x) {
		return x % 2 == 0 and x!=0;
		}); ///2 4 6 8

	cout << endl;

	num_2.clear();

	copy_if(num.begin(), num.end(), back_inserter(num_2), [](int x) {
		return x % 3 == 0 and x!=0;
		});

	for (auto x : num_2) {
		cout << x << " ";  // 3 6 9
	}

	return 0;
}
