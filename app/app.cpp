#include "app.h"

namespace vsite::oop::v8
{

	std::string not_number::show_error() const
	{
		return "not a number exception";
	}

	std::string not_operator::show_error() const
	{
		return"not an operator exception";
	}

	std::string divide_zero::show_error() const
	{
		return "division by zero exception";
	}

	int input_num(std::istream& input_stream)
	{
		int rez;
		
		if (input_stream >> rez)
			return rez;
		
		throw not_number();
	}

	char input_op(std::istream& input_stream)
	{
		char a;
		input_stream >> a;

		char allowed_operators[4] = { '+', '-', '*', '/' };

		for (int i = 0; i < 4; i++)
		{
			if (a == allowed_operators[i])
				return a;
		}

		throw not_operator();
	}

	double calc(int l_operand, char oper, int r_operand)
	{
		switch (oper)
		{
		case '+':
			return l_operand + r_operand;

		case '-':
			return l_operand - r_operand;

		case '*':
			return l_operand * r_operand;

		case '/':
			if (!r_operand)
				throw divide_zero();

			return double(l_operand) / r_operand;
		}
	}


}