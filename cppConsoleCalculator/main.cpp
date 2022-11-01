#include <iostream>
using namespace std;

int calculate(int num1, int num2, char calcOperator);
void getInput(char calcOperator);

int main(){
	char calcOperator{};

	while (calcOperator != '+' && calcOperator != '-' && calcOperator != '*' && calcOperator != '/'){

		cout << "Choose your operation: ";	
		cin >> calcOperator;

		switch (calcOperator){
		case '+':
			getInput('+');
			break;
		case '-':
			getInput('-');
			break;
		case '*':
			getInput('*');
			break;
		case '/':
			getInput('/');
			break;
		default:
			break;
		}
	}
}





