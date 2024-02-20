#include<iostream>
#include<algorithm>
#include<vector>
#include<random>
#include<vector>
#include<string_view>
#include<functional>
using namespace std;

void print(string_view text, vector<int> const& v = {}) {


	cout << text << ": ";
	for (const auto& e : v) {
		cout << e << ' ';
	}
	cout << endl;
}

int main()
{
	print("Max heap");

	vector<int> v{ 3,2,4,1,5,9 };

	print("initially, v", v);

	make_heap(v.begin(), v.end());

	print("after make_heap, v: ", v);

	pop_heap(v.begin(), v.end());
	print("after pop_heap, v", v);

	auto top = v.back();

	v.pop_back();
	print("top element : ", { top });
	print("after removing the former top element, v", v);

	print("\nMin heap");

	vector<int> v1{ 3, 2, 4, 1, 5, 9 };
	print("initially, v1", v1);

	make_heap(v1.begin(), v1.end(), std::greater<>{});
	print("after make_heap, v1", v1);

	pop_heap(v1.begin(), v1.end(), std::greater<>{});
	print("after pop_heap, v1", v1);

	auto top1 = v1.back();
	v1.pop_back();
	print("former top element", { top1 });
	print("after removing the former top element, v1", v1);

}