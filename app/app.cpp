#include "app.h"
#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& ss) {
		int num;
		ss >> num;
		return num;
	}
	char input_op(std::istream& ss)
	{
		char chr;
		ss >> chr;
		return chr;
	}
	double calc(int num1, char ch, int num2)
	{
		switch (ch)
		{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '/':
			return num1 / num2;
			break;
		case '*':
			return num1 * num2;
			break;
		default:
			break;
		}
	}
	not_number::not_number() : mText("You haven't used a number")
	{
	}
	not_operator::not_operator() : mText("You haven't used an operator")
	{
	}
	divide_zero::divide_zero() : mText("You tried using 0 in diving")
	{
	}
}