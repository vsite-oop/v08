#include "app.h"
#include <string>
#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& is) {
		int n;
		is >> n;
		if (is.fail()) {
			throw not_number();
		}
		return n;
	}

	char input_op(std::istream& is) {
		char c;
		is >> c;
		std::string ope = "+-*/";
		if (ope.find(c) == std::string::npos)
			throw not_operator();
		return c;
	}

	double calc(int p, char op, int d) {
		switch (op) {
		case '+':
			return p + d;
		case '-':
			return p - d;
		case '*':
			return p * d;
		case '/':
			if (d == 0) {
				throw divide_zero();
			}
			return static_cast<double>(p) / d;
		default:
			throw not_operator();
		}
	}
}