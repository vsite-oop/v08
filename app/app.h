#pragma once
#include <string>
#include <exception>

namespace vsite::oop::v8 
{
	int input_num(std::stringstream& ss);
	char input_op(std::stringstream& ss);
	double calc(const int first, const char op, const int second);


	class BaseExcp{};
	class not_number : public BaseExcp{};
	class not_operator : public BaseExcp{};
	class divide_zero : public BaseExcp{};
}