#include "app.h"

namespace vsite::oop::v8
{
	int input_num(std::istream& is) {
		int num;
		if (!(is >> num)) {
			throw not_number();
		}
		return num;
	}
	char input_op(std::istream& is) {
		char op;
		if (!(is >> op) || (op != '+' && op != '-' && op != '*' && op != '/')) {
			throw not_operator();
		}
		return op;
	}
	double calc(int num1, char op, int num2) {
		switch (op)
		{
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			if (num2 == 0) {
				throw divide_zero();
			}
			return static_cast<double>(num1) / num2;
		default:
			throw not_operator();
		}
	}
}