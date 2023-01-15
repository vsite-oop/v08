#include "app.h"

namespace vsite::oop::v8
{
	
	std::string not_number::throw_error() const
	{
		return "Error: Not a number";
	}

	std::string not_operator::throw_error() const
	{
		return "Error: Not an operator";
	}

	std::string divide_zero::throw_error() const
	{
		return "Error: Division by zero";
	}

	int input_num(std::istream& input_stream)
	{
		int rez;

		if (input_stream >> rez)
			return rez;

		throw not_number();
	}

	char input_op(std::istream& input)
	{
		char ch;
		input >> ch;

		char operators[4] = { '+', '-', '*', '/' };

		for (int i = 0; i < 4; i++)
		{
			if (ch == operators[i])
				return ch;
		}

		throw not_operator();
	}

	double calc(int left, char oper, int right)
	{
		switch (oper)
		{
		case '+':
			return left + right;

		case '-':
			return left - right;

		case '/':
			if (right == 0)
				throw divide_zero();
			return double(left) / right;

		case '*':
			return left * right;

		}
	}

}