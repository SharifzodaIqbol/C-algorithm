#include<algorithm>
#include<numeric>
#include<iostream>
#include<vector>
#include<functional>
#include<iterator>

using namespace std;

int main() {

	vector<int> vt_1{ 1,3,4,5,9 };
	vector<int> vt_2{ 1,2,3 };

	for (const auto needle : vt_2) {
		cout << "Searching for " << needle << "\n";
		if (binary_search(vt_1.begin(), vt_1.end(), needle)) {
			cout << "Found "<<needle<<"\n";
		}
		else {
			cout << "No dice!\n";
		}
	}

}

/*
* Print{
* Searching for 1
*Found 1
*Searching for 2
*No dice!
*Searching for 3
*Found 3
* }
*/
