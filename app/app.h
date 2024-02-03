#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& is);

	char input_op(std::istream& is);

	double calc(int p, char op, int d);

	class base_exception {
	public:
		virtual std::string message() const = 0;
		virtual ~base_exception() = default;
	};

	class not_operator : public base_exception {
	public:
		std::string message() const override {
			return "Not a valid operator used.";
		}
	};

	class not_number : public base_exception {
	public:
		std::string message() const override {
			return "Not a numeric value used.";
		}
	};

	class divide_zero : public base_exception {
	public:
		std::string message() const override {
			return "Division by zero used.";
		}
	};

}