#include "app.h"

namespace vsite::oop::v8
{
	char input_op(std::istream& is) {
		char op;
		is >> op;
		if(op=='+' || op=='-' || op=='*' || op=='/') {
			return op; 
		}
		throw not_operator();
	}

	int input_num(std::istream& is) {
		int n;
		is >> n;
		if (is.fail())
			throw not_number();
		return n;
	}

	double calc(int a, char op, int b) {
		switch (op)
		{
		case '+':
			return a + b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			if (b == 0) {
				throw divide_zero();
			}
			return (double)a / b;
		}

	}
}