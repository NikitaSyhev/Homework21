//���� ������ ������ � ������� ������������� �������
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;
	std::cout << "������� �������� X � Y: \n";
	std::cin >> x >> y;

	double* px = &x;
	double* py = &y;

	double mean = (*px + *py) / 2;

	std::cout << "������� �������������� �����: " << mean << '\n';






















	return 0;
}