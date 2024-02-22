#include <algorithm>
#include <iostream>
#include <string_view>
#include <vector>

void println(std::string_view rem, std::vector<int> const& v)
{
    std::cout << rem;
    for (int e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

int main()
{
    std::vector<int> v{ 3, 1, 4, 1, 5, 9 };

    std::make_heap(v.begin(), v.end());
    println("after make_heap: ", v);

    v.push_back(6);
    println("after push_back: ", v);

    std::push_heap(v.begin(), v.end());
    println("after push_heap: ", v);
}