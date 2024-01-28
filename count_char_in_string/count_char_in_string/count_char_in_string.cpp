#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {

	system("chcp 1251");
	string str = "C++,Java";
	char ch = '+';

	int count1{};
	for (int i = 0; (i = str.find(ch, i)) != string::npos; ++i) {
		count1++;
	}
	cout << endl;

	cout << "Символ:\t{"<< ch <<"} встречается "<< count1 <<" раз(а)\n";
	
	
	
	int count2 = count(str.begin(), str.end(), ch); // второй способ 
	cout << "Символ:\t{"<< ch <<"} встречается "<< count1 <<" раз(а)\n";

	
	int count = count_if(str.begin(), str.end(),
		[&ch](char c) {
			return c == ch;
		}); // с помощью лямбда функции 

	cout << "Символ:\t{" << ch << "} встречается " << count1 << " раз(а)\n";

	return 0;
}