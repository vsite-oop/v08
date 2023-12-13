#include "app.h"
#include <format>
// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description
using namespace vsite::oop::v8;
int main()
{
	while (true) {
		try {
			int operand1 = input_num(std::cin);
			char oper = input_op(std::cin);
			int operand2 = input_num(std::cin);
			std::cout << std::format("{0} {1} {2} = {3}", operand1, oper, operand2, calc(operand1, oper, operand2)) << std::endl;
		}
		catch (exception& ex)
		{
			std::cout << ex.error();
			break;
		}
	}
}
