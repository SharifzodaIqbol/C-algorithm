#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<string> input = { "red", "green", "blue", "gray", "black" };

    for (auto itr = input.cbegin(); itr != input.end(); itr++)
    {
        // remove strings having length 5
        if (itr->length() == 5) {
            input.erase(itr--);
        }
    }

    copy(input.begin(), input.end(), ostream_iterator<string>(cout, "\n"));

    return 0;
}