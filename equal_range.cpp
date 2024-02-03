#include<iostream>
#include<numeric>
#include<functional>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

struct S {

	int number;
	char name;

	bool operator < (const S& s) const {
		return number < s.number;
	};

};

struct Comp {

	bool operator ()(const S& s, int i) const {
		return s.number < i;
	}
	bool operator ()(int i, const S& s) {
		return i < s.number;

	}
};


int main() {

	const vector<S> vec{ {1,'A'},{2,'B'},{2,'C'},
						{2,'D'},{4,'G'},{3,'F'} };

	const S value{ 2,'?' };


	const auto p = equal_range(vec.begin(), vec.end(), value);


	for (auto i = p.first; i != p.second; ++i) {

		cout << i->name<<' '; // B C D

	}

	cout << '\n';

	const auto p2 = std::equal_range(vec.begin(), vec.end(), 2, Comp{});

	for (auto i = p2.first; i != p2.second; ++i)
		std::cout << i->name << ' '; // B C D
	std::cout << '\n';

}
