#include <algorithm>
#include <iostream>
#include <string_view>
#include <vector>
 
void println(std::string_view fmt, auto const& v)
{
    for (std::cout << fmt; const auto &i : v)
        std::cout << i << ' ';
    std::cout << '\n';
}
 
int main()
{
    std::vector<int> v{3, 1, 4, 1, 5, 9};
 
    std::make_heap(v.begin(), v.end());
    println("after make_heap, v: ", v);
 
    std::sort_heap(v.begin(), v.end());
    println("after sort_heap, v: ", v);
}
