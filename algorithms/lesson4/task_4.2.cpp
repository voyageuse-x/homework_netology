#include<iostream>
#include <exception>

void print_dynamic_array(int* mas, int logical_size, int actual_size) {
	std::cout << "Динамический массив: ";
	for (int i = 0; i < actual_size; i++) {
		if (i < logical_size) {
			std::cout << mas[i] << " ";
		}
		else {
			std::cout << "- ";
		}
	}
	return;
}

int* append_to_dynamic_array(int* mas, int& logical_size, int& actual_size, int add_elem) {
	if (logical_size == actual_size) {
		int* new_mas = new int[actual_size * 2];
		for (int i = 0; i < logical_size; i++) {
			new_mas[i] = mas[i];
		}
		new_mas[logical_size] = add_elem;
		logical_size++;
		actual_size *= 2;
		delete[] mas;
		return new_mas;
	}
	else {
		mas[logical_size] = add_elem;
		logical_size++;
	
		return mas;
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	int actual_size{};
	int logical_size{};
	int add_elem{-1};
	try {
		std::cout << "Введите фактический размер массива: ";
		std::cin >> actual_size;
		std::cout << "Введите логический размер массива: ";
		std::cin >> logical_size;
		if (logical_size > actual_size) {
			throw "Ошибка! Логический размер массива не может превышать фактический!";
		}
	}
	catch (const char* ex){
		std::cout << ex << std::endl;
		return EXIT_FAILURE;
	}


	int* mas = new int[actual_size];
	for (int i = 0; i < logical_size; i++) {
		std::cout << "Введите arr[" << i << "]: ";
		std::cin >> mas[i];
	}
	print_dynamic_array(mas, logical_size, actual_size);
	
	
	std::cout << "\nВведите элемент для добавления: ";
	std::cin >> add_elem;
	while (add_elem != 0) {
		mas = append_to_dynamic_array(mas,logical_size, actual_size, add_elem);
		//std::cout << "log_s: " << logical_size << "   act_size: " << actual_size << std::endl;
		print_dynamic_array(mas, logical_size, actual_size);
		std::cout << "\nВведите элемент для добавления: ";
		std::cin >> add_elem;	
	}
	std::cout << "Спасибо! Ваш массив: ";
	print_dynamic_array(mas, logical_size, actual_size);
	delete[] mas;
	return EXIT_SUCCESS;

}