#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main()
{
    string str = "#Return #Value #Optimization";
    cout << "before: " << quoted(str) << '\n';
    remove_copy(str.begin(), str.end(),
        ostream_iterator<char>(cout), '#');
}