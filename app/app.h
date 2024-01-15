#pragma once
#include <string>
#include <iostream>


namespace vsite::oop::v8 
{
	int input_num(std::istream& s);

	char input_op(std::istream& s);

	double calc(int num1, char op, int num2);

	class base_exception{
	public:
		virtual std::string message() const = 0;
		virtual ~base_exception() = default;
	};

	class not_operator : public base_exception {
	public:
		std::string message() const override {
			return "not an operator!";
		}
	};

	class not_number : public base_exception {
	public:
		std::string message() const override {
			return "not a number!";
		}
	};

	class divide_zero : public base_exception {
	public:
		std::string message() const override {
			return "cannot divide by zero!";
		}
	};
}