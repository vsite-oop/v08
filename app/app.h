#pragma once

#include <sstream>  // stringstream
#include <iostream>  // cout

namespace vsite::oop::v8 
{
	/*===Exceptions===*/
	class MathErr {
	public:
		virtual void showError() = 0;
	};

	class not_number : public MathErr {
	public:
		void showError() override {
			std::cout << "not a number\n";
		}
	};

	class not_operator : public MathErr {
	public:
		void showError() override {
			std::cout << "invalid operation\n";
		}
	};

	class divide_zero : public MathErr {
	public:
		void showError() override {
			std::cout << "divide by zero\n";
		}
	};
	
	/*===Functions===*/
	int input_num(std::istream&);

	char input_op(std::istream&);

	double calc(int, char, int);
}
