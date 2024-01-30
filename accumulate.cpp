#include<functional>
#include<iostream>
#include<numeric>
#include<string>
#include<vector>

using namespace std;

int main() {

	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	
	int sum = accumulate(v.begin(), v.end(), 0);
	int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());

	auto dash_fold = [](string str, int b) {
		return move(str) + '-' + to_string(b);
		};

	string s = accumulate(next(v.begin()), v.end(), 
		to_string(v[0]), 
		dash_fold);

	string sr = accumulate(next(v.rbegin()), v.rend(), 
		to_string(v.back()), 
		dash_fold);

	cout << "sum: " << sum << '\n'
		<< "product: " << product << '\n'
		<< "dash-separated string: " << s << '\n'
		<< "dash-separated string (right-folded): " << sr << '\n';

	return 0;
}