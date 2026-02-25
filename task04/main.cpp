#include <iostream>
using namespace std;

bool search_binary(int array[10], int length, int value) {
	int first = 0;
	int last = length - 1;

	while (first <= last) {
		int mid = (first + last) / 2;
		if (array[mid] == value) {
			return true;
		}
		else if (array[mid] < value) {
			first = mid + 1;

		}
		else {
			last = mid - 1;
		}
	}
	return false;

}


int main() {
	int array[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size = 10;

	int value = 7;

	cout << "Does value exist? - ";
	cout << (search_binary(array, size, value) ? "Yes" : "No");

	return 0;
}
