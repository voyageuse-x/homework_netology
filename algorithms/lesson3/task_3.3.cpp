#include <iostream>

void count_cort(int* arr, int size) {
	const int min_v = 10;
	const int max_v = 24;

	const int size_c = max_v - min_v + 1;
	int count_mas[size_c]{};

	for (int i = 0; i < size; i++) {
		count_mas[arr[i] - min_v]++;
	}
	int ind = 0;
	for (int i = 0; i < size_c; i++) {
		while (count_mas[i] > 0) {
			arr[ind++] = i + min_v;
			count_mas[i]--;
		}
	}
}

void print_mas(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	return;
}

int main() {
	setlocale(LC_ALL, "ru");
	int arr1[] = { 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
	int arr2[] = { 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 17, 11, 17, 16, 12, 11, 16, 22, 23, 16 };
	int arr3[] = { 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10 };

	int size1 = sizeof(arr1) / 4;
	int size2 = sizeof(arr2) / 4;
	int size3 = sizeof(arr3) / 4;

	std::cout << "Исходный массив: ";
	print_mas(arr1, size1);
	count_cort(arr1, size1);
	std::cout << "\nОтсортированный массив: ";
	print_mas(arr1, size1);

	std::cout << "\n\nИсходный массив: ";
	print_mas(arr2, size2);
	count_cort(arr2, size2);
	std::cout << "\nОтсортированный массив: ";
	print_mas(arr2, size2);


	std::cout << "\n\nИсходный массив: ";
	print_mas(arr3, size3);
	count_cort(arr3, size3);
	std::cout << "\nОтсортированный массив: ";
	print_mas(arr3, size3);

	return EXIT_SUCCESS;

}