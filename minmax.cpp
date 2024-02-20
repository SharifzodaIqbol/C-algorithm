#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{ 3, 1, 4, 1, 5, 9, 2, 6 };
    srand(static_cast<unsigned int>(time(0)));
    pair<int, int> bounds = minmax(rand() % v.size(),
        rand() % v.size());

    cout << "v[" << bounds.first << "," << bounds.second << "]: ";
    for (int i = bounds.first; i < bounds.second; ++i)
        cout << v[i] << ' ';
    cout << '\n';
}