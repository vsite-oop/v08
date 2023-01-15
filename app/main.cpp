#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	using namespace vsite::oop::v8;

	try
	{
		while (true)
		{
			int left = input_num(std::cin);
			char oper = input_op(std::cin);
			int right = input_num(std::cin);

			std::cout << left << ' ' << oper << ' ' << right << " = " << calc(left, oper, right) << std::endl;
		}
	}
	catch (const exception& error)
	{
		std::cout << error.throw_error();
	}
}
