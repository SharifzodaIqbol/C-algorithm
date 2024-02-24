#include <algorithm>
#include <iostream>
#include <vector>

auto print = [](auto const remark, auto const& v)
    {
        std::cout << remark;
        for (auto n : v)
            std::cout << n << ' ';
        std::cout << '\n';
    };

int main()
{
    std::vector<int> v{ 2, 4, 2, 0, 5, 10, 7, 3, 7, 1 };
    print("before sort:\t\t", v);

    sort(begin(v), end(v));

    print("after sort:\t\t", v);

    // simple rotation to the left
    std::rotate(v.begin(), v.begin() + 1, v.end());
    print("simple rotate left:\t", v);

    // simple rotation to the right
    std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
    print("simple rotate right:\t", v);
}