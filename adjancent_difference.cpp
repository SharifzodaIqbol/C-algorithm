#include<iostream>
#include<functional>
#include<iostream>
#include<numeric>
#include<vector>
#include<iterator>
#include<array>

using namespace std;

auto print = [](auto comment, auto const& array_y) {
	cout << comment;
	for (auto n : array_y) {
		cout << n << " ";
	}
	cout << endl;
	};

int main() {
	vector<int> v{ 4, 6, 9, 13, 18, 19, 19, 15, 10 };

	print("Initially, v = ", v);

	adjacent_difference(v.begin(), v.end(), v.begin());// считает разность между парами начиная со второй позиции

	print("Modified, v = ", v);

	array<int, 10> arr{ 1 };

	adjacent_difference(begin(arr), prev(end(arr)),
		next(begin(arr)), plus<>{});

	print("Fibonacci, arr = ", arr);

	return 0;
}