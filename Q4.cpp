#include <iostream>
#include <stdexcept>

void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << "  ";
    }
    std::cout << std::endl;
}

void enterArrayElements(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element at index " << i << ": ";
        std::cin >> array[i];

        // Input validation
        if (std::cin.fail()) {
            throw std::runtime_error("Invalid input. Please enter integers only.");
        }
    }
    showArray(array, size);
}

int main() {
    int size;
    int* arr;

    std::cout << "Enter size: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size. Size must be a positive integer." << std::endl;
        return 0;
    }

    arr = new int[size];

    try {
        enterArrayElements(arr, size);
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
        delete[] arr;
        return 0;
    }

    delete[] arr;

    return 0;
}
