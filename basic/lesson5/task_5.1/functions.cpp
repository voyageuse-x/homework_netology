#include "Math_functions.h"
int addition(int a, int b) {
	return a + b;
}
int subtruct(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}
int exponentiation(int a, int b) {
	int ans = a;
	for (int i = 1; i < b; i++) {
		ans *= a;
	}
	return ans;
}