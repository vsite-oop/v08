#include "app.h"
#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& is) {
		
		int n;
		is >> n;
		if (!is)
			throw not_number();

		return n;
	}
	char input_op(std::istream& is) {
		char op;
		is >> op;
		if (op != '+' &&
			op != '-' &&
			op != '*' &&
			op != '/')
		{
			throw not_operator();
		}
			return op;
	}

	double calc(const int first, const char op, const int second) {

		if (op == '/' && second == 0  ) {
			throw divide_zero();
		}
		else {
			switch (op)
			{
			case '+':
				return int (first + second);
			case '-':
				return int (first - second);
			case '/':
				return static_cast<double>(first) / second;
			case '*':
				return int (first * second);
			default:
				break;
			}
		}
	}


	std::string not_number::error() {
		return ("not a number");
	}

	std::string not_operator::error() {
		return ("invalid operation");
	}

	std::string divide_zero::error() {
		return ("divide by zero");
	}
}