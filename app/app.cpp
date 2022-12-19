#include "app.h"

namespace vsite::oop::v8
{

	void not_number::show_error() const
	{
		std::cout << "not a number exception";
	}

	void not_operator::show_error() const
	{
		std::cout << "not an operator exception";
	}

	void divide_zero::show_error() const
	{
		std::cout << "division by zero exception";
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
		if (r_operand == 0)
			throw divide_zero();

		switch (oper)
		{
		case '+':
			return l_operand + r_operand;

		case '-':
			return l_operand - r_operand;

		case '*':
			return l_operand * r_operand;

		case '/':
			return double(l_operand) / r_operand;
		}
	}


}