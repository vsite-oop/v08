#pragma once
#include<iostream>
#include<sstream>
namespace vsite::oop::v8 
{

	int input_num(std::istream& ss);

	char input_op(std::istream& ss);

	double calc(double num1, char op, double num2);
	
	class Error {
	public:
		std::string virtual  showError() const = 0;
	};

	class not_number : public Error{
	public:
		std::string showError() const override {
			return "not a number\n";
		}
	};

	class not_operator : public Error {
	public:
		std::string showError() const override {
			return  "invalid operation\n";
		}
	};

	class divide_zero : public Error {
	public:
		std::string showError() const override  {
			return "divide by zero\n";
		}
	};
}

