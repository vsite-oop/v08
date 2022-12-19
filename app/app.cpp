#include "app.h"

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

		if (second == 0)
			throw divide_zero();
		else {
			switch (op)
			{
			case '+':
				return double(first + second);
				break;
			case '-':
				return double(first - second);
				break;
			case '/':
				return double(first / second);
				break;
			case '*':
				return double(first * second);
			default:
				break;
			}
		}
	}


	class BaseExcp {
	public:
		virtual std::string error() {};
	};
	class not_number : public BaseExcp {
	public:
		std::string error() override {
			return ("not a number");
		}
	};
	class not_operator : public BaseExcp {
	public:
		std::string error() override {
			return ("invalid operation");
		}
	};
	class divide_zero : public BaseExcp {
	public:
		std::string error() override {
			return ("divide by zero");
		}
	};
}