#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    system("chcp 1251");

    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // ��������� ����� �� ������ � ��������
    auto partition_point = std::partition(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
        });

    // ������� ���������
    std::cout << "׸���� �����: ";
    for (auto it = numbers.begin(); it != partition_point; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "�������� �����: ";
    for (auto it = partition_point; it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}