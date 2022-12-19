#pragma once
#include <string>

namespace vsite::oop::v8 
{
	class exception {
	public:
		virtual std::string err() = 0;
	};

	class not_number : public exception {
	public:
		std::string err();
	};

	class not_operator : public exception {
	public:
		std::string err();
	};

	class divide_zero : public exception {
	public:
		std::string err();
	};

	int input_num(std::istream& ss);

	char input_op(std::istream& ss);

	double calc(int a, char c, int b);
}