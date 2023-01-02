#pragma once

#include <sstream>  // stringstream

namespace vsite::oop::v8 
{
	/*===Exceptions===*/
	class not_number {
	public:
		std::string err;
		not_number(const char* s) : err(s) {};
	};

	class not_operator {
	public:
		std::string err;
		not_operator(const char* s) : err(s) {};
	};

	class divide_zero {
	public:
		std::string err;
		divide_zero(const char* s) : err(s) {};
	};
	
	/*===Functions===*/
	int input_num(std::stringstream&);

	char input_op(std::stringstream&);

	double calc(int, char, int);
}
