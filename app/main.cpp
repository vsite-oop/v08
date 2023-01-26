#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

using namespace vsite::oop::v8;

int main()
{
	while (true) {

		try {
			std::cout << "first number: ";
			int first = input_num(std::cin);

			std::cout << "operator: ";
			char op = input_op(std::cin);

			std::cout << "second number: ";
			int second = input_num(std::cin);

			double r = calc(first, op, second);

			std::cout << first << op << second << '=' << r << std::endl;
		}
		catch (BaseExcp& ex) {
			std::cout << ex.error() << std::endl;
			return false;
		}
	}
}
