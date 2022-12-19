#pragma once

#include <iostream>

namespace vsite::oop::v8 
{
	class calculator_exception
	{
	public:
		std::string virtual show_error() const = 0;
	};

	class not_number : public calculator_exception
	{
	public:
		std::string show_error() const override;
	};

	class not_operator : public calculator_exception
	{
		std::string show_error() const override;
	};

	class divide_zero : public calculator_exception
	{
		std::string show_error() const override;
	};

	int input_num(std::istream& input_stream);
	char input_op(std::istream& input_stream);
	double calc(int l_operand, char oper, int r_operand);
}