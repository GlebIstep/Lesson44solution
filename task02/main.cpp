#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);


	init_rnd(array, size, 0, 100);

	print("Array:\n");
	print(convert(array, size));

	print("Count of non zero elements:\n" );
	print(to_string(count_non_zero_elements(array, size)));


	return 0;
}