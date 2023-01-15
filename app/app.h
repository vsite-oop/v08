#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v8 
{
	int input_num(std::istream& input_stream);
	char input_op(std::istream& input_stream);
	double calc(int left, char oper, int right);
	
	class exception
	{
	public:
		std::string virtual throw_error() const = 0;
	};

	class not_number : public exception
	{
	public:
		std::string throw_error() const override;
	};

	class not_operator : public exception
	{
		std::string throw_error() const override;
	};

	class divide_zero : public exception
	{
		std::string throw_error() const override;
	};

}