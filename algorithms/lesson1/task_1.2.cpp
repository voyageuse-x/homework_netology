#include <iostream>

int count(int* mas, const int size, int point) {
	int result{};

	int left = 0;
	int right = size - 1;
	int middle;
	while (left <= right){
		middle = left + (right - left) / 2;
		
		if (mas[middle] > point) {
			result = middle;
			right = middle - 1;

		}
		else {
			left = middle + 1;
		}

	}
	return size - result;
}



int main() {
	setlocale(LC_ALL, "ru");

	const int SIZE = 9;
	int point;
	int mas[SIZE] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };

	std::cout << "Введите точку отсчёта: ";
	std::cin >> point;

	std::cout << "Количество элементов в массиве больших, чем " << point << ": " << count(mas, SIZE, point);

	return EXIT_SUCCESS;


}