#include "util.h"

void print(string s) {
	cout << s;
}
void init_rnd(int array[DEFAULT_SIZE], int length, int a, int b) {
	for (int i = 0; i < length; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}

}
string convert(int array[DEFAULT_SIZE], int length) {
	string s = "";

	for (int i = 0; i < length; i++)
	{
		s += to_string(array[i]) + " ";

	}
}