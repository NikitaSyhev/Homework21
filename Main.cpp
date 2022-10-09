//Этот проект создан с помощью классического шаблона
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;
	std::cout << "Введите значения X и Y: \n";
	std::cin >> x >> y;

	double* px = &x;
	double* py = &y;

	double mean = (*px + *py) / 2;

	std::cout << "Среднее арифметическое равно: " << mean << '\n';






















	return 0;
}