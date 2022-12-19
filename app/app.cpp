#include "app.h"
#include <iostream>

namespace vsite::oop::v8
{
	std::string not_number::err() {
		return "Not a number exception!";
	}

	std::string not_operator::err() {
		return "Not an operator exception!";
	}

	std::string divide_zero::err() {
		return "Divide by zero exception!";
	}

	int input_num(std::istream& ss) {
		int a;
		if (!(ss >> a)) {
			throw not_number();
		}
		return a;
	}	

	char input_op(std::istream& ss) {
		char a;
		ss >> a;
		switch (a) {
		case '+':
			return a;
		case '-':
			return a;
		case '*':
			return a;
		case '/':
			return a;
		default:
			throw not_operator();
		}
		return a;
	}

	double calc(int a, char c, int b) {
		switch (c) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			if (b == 0) throw divide_zero();
			return static_cast<double>(a) / b;
		}
	}
	
}