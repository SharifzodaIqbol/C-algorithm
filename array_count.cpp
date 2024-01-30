#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>

int main()
{
    constexpr std::array v{1, 2, 3, 4, 4, 3, 7, 8, 9, 10};
    std::cout << "v: ";
    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';



    for (const int target : {3, 4, 5})
    {
        const int num_items = std::count(v.cbegin(), v.cend(), target);
        std::cout << "number: " << target << ", count: " << num_items << '\n';
    }


    int count_div4 = std::count_if(v.begin(), v.end(), [](int i) { return i % 4 == 0; });
    std::cout << "numbers divisible by four: " << count_div4 << '\n';



    auto distance = [](auto first, auto last)
    {
        return std::count_if(first, last, [](auto) { return true; });
    };

    //static_assert(distance(v.begin(), v.end()) == 10);
}
