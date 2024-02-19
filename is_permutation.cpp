#include<iostream>
#include<algorithm>
using namespace std;

template<typename Os, typename V>

Os& operator<<(Os& os, V& v) {
	os << "{ ";
	for (auto const& e : v) {
		os << e << ' ';
	}
	return os << '}';
}

int main()
{
	static auto v1 = { 1,2,3,4,5 };
	static auto v2 = { 3,5,4,1,2 };
	static auto v3 = { 3,5,4,1,1 };

	cout << v2 << " is a permutation of " << v1 << ": " << boolalpha
		<< is_permutation(v1.begin(), v1.end(), v2.begin()) << '\n'
		<< v3 << " is a permutation of " << v1 << ": "
		<< is_permutation(v1.begin(), v1.end(), v3.begin()) << '\n';
}