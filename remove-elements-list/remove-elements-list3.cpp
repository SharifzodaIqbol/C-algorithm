#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<string> input = { "red", "green", "blue", "gray", "black" };

    list<string>::const_iterator itr = input.cbegin();
    while (itr != input.cend())
    {
        list<string>::const_iterator curr = itr++;
        if (curr->length() == 5) {
            input.erase(curr);
        }
    }

    copy(input.begin(), input.end(), ostream_iterator<string>(cout, "\n"));

    return 0;
}