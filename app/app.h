#pragma once
#include <sstream>

namespace vsite::oop::v8 
{
	int input_num(std::istream& ss);

	char input_op(std::istream& ss);

	double calc(int num1, char ch, int num2);

	class not_number {
		std::string mText;
	public:
		not_number();
		std::string GetText() const { return mText; };
	};

	class not_operator {
		std::string mText;
	public:
		not_operator();
		std::string GetText() const { return mText; };
	};

	class divide_zero {
		std::string mText;
	public:
		divide_zero();
		std::string GetText() const { return mText; };
	};
}