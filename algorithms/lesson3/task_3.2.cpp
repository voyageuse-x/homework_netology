#include <iostream>


int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    int arr1[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
    int arr2[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
    int arr3[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Исходный массив: ";
    print_array(arr1, size1);
    quick_sort(arr1, 0, size1 - 1);
    std::cout << "Отсортированный массив: ";
    print_array(arr1, size1);

    std::cout << "\n\nИсходный массив: ";
    print_array(arr2, size2);
    quick_sort(arr2, 0, size2 - 1);
    std::cout << "Отсортированный массив: ";
    print_array(arr2, size2);

    std::cout << "\n\nИсходный массив: ";
    print_array(arr3, size3);
    quick_sort(arr3, 0, size3 - 1);
    std::cout << "Отсортированный массив: ";
    print_array(arr3, size3);

    return 0;
}
