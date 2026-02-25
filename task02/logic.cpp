#include "logic.h"

int count_non_zero_elements(int array[DEFAULT_SIZE], int length) {
	int count;

	for (int i = length - 1; i >= 0; i--) {
		if (array[i] != 0) {
			count++;
		}
	}
}