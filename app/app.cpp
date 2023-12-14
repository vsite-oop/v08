#include "app.h"

namespace vsite::oop::v8
{
	std::string not_number::error() const { return "not a number";}
	std::string not_operator::error() const { return "invalid operation";}
	std::string divide_zero::error() const { return "divide by zero";}
	int input_num(std::istream& is)
	{
		int n;
		is >> n;
		if (is.fail())
			throw not_number();
		return n;
	}
	char input_op(std::istream& is)
	{
		char  n;
		is >> n;
		if (n == '+' || n == '-' || n == '/' || n == '*')
			return n;		
		else
			throw not_operator();
	}
	double calc(int operand1, char op, int operand2)
	{
		switch (op)
		{
			case '+':
				return operand1 + operand2;
			case '-':
				return operand1 - operand2;
			case '*':
				return operand1 * operand2;
			case '/': {
				if (operand2 == 0)
					throw divide_zero();
				return static_cast<double>(operand1) / operand2;
			}
		}
	}
}