#pragma once
#include <iostream>
namespace vsite::oop::v8 
{
	class exception {
	public:
		virtual std::string error() const = 0;
		virtual ~exception() = default;
	};
	class not_number : public exception {
	public:
		std::string error() const override;
	};
	class not_operator : public exception {
	public:
		std::string error() const override;
	};
	class divide_zero : public exception {
	public:
		std::string error() const override;
	};



	int input_num(std::istream& s);
	char input_op(std::istream& s);
	double calc(int operand1, char op, int operand2);
}