#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class Iter>

void merge_sort(Iter first, Iter last) {

	if (last - first > 1) {

		Iter middle = first + (last - first) / 2;

		merge_sort(first, middle);

		merge_sort(middle, last);

		inplace_merge(first, middle, last);
	}
}

int main()
{
	vector<int> v{ 8,4,-2,5,-7,10,-12 };

	merge_sort(v.begin(), v.end());

	for (const auto& n : v) {
		cout << n << " ";
	}

	cout << endl;

	return 0;
}