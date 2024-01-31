#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	vector<int> vt{ 2,4,5,1,6,23,23,64 };

	auto iter_1 = adjacent_find(vt.begin(), vt.end());

	if (iter_1 == vt.end()) {
		cout << "No matching adjacent elements\n";
	}
	else {
		cout << "The first adjacent pair of equal elements is at "
			<< distance(vt.begin(), iter_1) << ", iter_1 = " << *iter_1 << "\n";
	}


	auto iter_2 = adjacent_find(vt.begin(), vt.end(), greater<int>());

	if (iter_2 == vt.end()) {
		cout << "The entire vector is sorted in ascending order\n";
	}
	else {
		cout << "The last element in the non-decreasing subsequence is a "
			<< distance(vt.begin(), iter_2) << ", iter_2 = " << *iter_2 << "\n";
	}

	return 0;
}