int calculate(int num1, int num2, char calcOperator) {
	switch (calcOperator) {
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		return num1 / num2;
	default:
		break;
	}
	return 0;
}