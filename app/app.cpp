#include "app.h"
#include <string>
#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& s) {
		int n;
		s >> n;
		if (s.fail()) {
			throw not_number();
		}
		return n;
	}

	char input_op(std::istream& s) {
		char op;
		std::string sss = "+-*/";
		s >> op;
		if (sss.find(op) == std::string::npos)
			throw not_operator();
		return op;
		
	}

	double calc(int num1, char op, int num2) {
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
			return static_cast<double>(num1) / num2;
		default:
			throw not_operator();
		}
	}
}