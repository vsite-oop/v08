#pragma once
#include <string>
#include <iostream>
#include <exception>

namespace vsite::oop::v8 
{
	int input_num(std::istream& is);
	char input_op(std::istream& is);
	double calc(const int first, const char op, const int second);


	class BaseExcp { public: virtual std::string error() = 0; };
	class not_number : public BaseExcp {public: std::string error() override; };
	class not_operator : public BaseExcp {public: std::string error() override; };
	class divide_zero : public BaseExcp {public: std::string error() override; };
}