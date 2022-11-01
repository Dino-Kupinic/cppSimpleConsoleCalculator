#include <iostream>
using namespace std;

int calculate(int num1, int num2, char calcOperator);

void getInput(char calcOperator) {
	int num1{};
	int num2{};
	cout << "enter the first number: ";
	cin >> num1;
	cout << "enter the second number: ";
	cin >> num2;
	cout << "the result is " << calculate(num1, num2, calcOperator);
}