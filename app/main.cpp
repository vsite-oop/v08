// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description
#include "app.h"

int main()
{
	using namespace vsite::oop::v8;

	try
	{
		while (true)
		{
	
			int num1 = input_num(std::cin);
			char op = input_op(std::cin);
			int num2 = input_num(std::cin);

			std::cout << num1 << ' ' << op << ' ' << num2 << " = " << calc(num1, op, num2) << std::endl;
		}
	}
	catch (const Error& e)
	{
		std::cout << e.showError();
	}
}