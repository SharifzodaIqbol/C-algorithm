#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = { 1, 2, 3 };

    do {
        for (const auto& val : vec) {
            cout << val << " ";
        }
        cout << endl;
    } while (next_permutation(vec.begin(), vec.end()));

    return 0;
}