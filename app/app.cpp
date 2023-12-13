#include "app.h"

namespace vsite::oop::v8
{
	std::string not_number::error() const { return "neispravan broj";}
	std::string not_operator::error() const { return "neispravan operator";}
	std::string divide_zero::error() const { return "Nema dijeljenja s nulom";}
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
		std::string n;
		is >> n;
		char niz[] = { '+','-','/','*' };
		if (n.length() > 1)
		{
			if (n[0] == '+')
				return '+';
			else if (n[0] == '-' && n.length() % 2 == 0)
				return '+';
			else if (n[0] == '-' && n.length() % 2 != 0)
				return '-';
			else
				throw not_operator();
		}
		else 
		{
			for (auto i : niz)
			{
				if (i == n[0])
					return i;
			}
			throw not_operator();
		}
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
				return (double)operand1 / (double)operand2;
			}
		}
	}
}