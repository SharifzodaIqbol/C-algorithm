#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    list<string> input = { "red", "green", "blue", "gray", "black" };
    list<string>::const_iterator itr = input.begin();
    list<string>::const_iterator itr = input.cbegin();
    while (itr != input.cend())
    {
        if (itr->length() == 5) {
            itr = input.erase(itr);
        }
        else {
            ++itr;
        }
    }

    copy(input.begin(), input.end(), ostream_iterator<string>(cout, "\n"));

    return 0;
}