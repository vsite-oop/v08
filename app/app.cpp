#include "app.h"



namespace vsite::oop::v8
{
	int input_num(std::istream& ss) {
		int number;
		if (ss >> number)
		{
			return number;
		}
		else {
			throw not_number();
		}

	}

	char input_op(std::istream& ss) {

		char op;
		if ((ss >> op) && (strchr("+-*/", op) != NULL)) {
			return op;
		}
		else {
			throw not_operator();
		}
	}


	double calc(double num1, char op, double num2) {

		switch (op) {
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
			else {
				return num1 / num2;
			}

		}



	}
}