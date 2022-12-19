#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	try
	{
		while (true)
		{
			int l_operand = vsite::oop::v8::input_num(std::cin);
			char oper = vsite::oop::v8::input_op(std::cin);
			int r_operand = vsite::oop::v8::input_num(std::cin);

			std::cout << vsite::oop::v8::calc(l_operand, oper, r_operand) << std::endl;
		}
	}
	catch (const vsite::oop::v8::calculator_exception& err)
	{
		err.show_error();
	}
}
