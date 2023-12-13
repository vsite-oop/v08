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
			double result = calc(operand1, oper, operand2);
			std::cout << operand1 << oper << operand2 << '=' << result << std::endl;
		}
		catch (const exception& ex)
		{
			std::cout << ex.error();
			break;
		}
	}
}
